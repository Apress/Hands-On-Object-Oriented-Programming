#include<iostream>
#include<netdb.h>
#include<cstdlib>
#include<arpa/inet.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<unistd.h>
#include<string>
#include<bits/stdc++.h> 
using namespace std;
class IoTSensor
{
	private:
		string id;
		int x,y;
		float sense_value;
		float sense_thr_file;
		float sense_thr_server;
		int battery_level;
		int sockfd;
		char filename[15];
		fstream myfile;
		char *buffer;
	public:
		void setFilename(char* file);
		char* getFilename();
		void setId(string sen_id);
		string getId();
		void setX(int sen_x);
		int getX();
		void setY(int sen_y);
		int getY();
		void setSenseValue(float val);
		float getSenseValue();
		void setBatteryLevel(int level);
		int getBatteryLevel();
		IoTSensor(char *file, const char *server_ip, unsigned int server_port, float file_thr, float serv_thr)
		{

			sense_thr_file = file_thr;
			sense_thr_server = serv_thr;
			buffer = new char[100];
		
			setFilename(file);	
			myfile.open(file,ios::app);
			if (!myfile)
			{
				cout<<"new file created\n";
			}
			else
			{
				cout<<"opening existe file\n";	
			}
		
        		struct sockaddr_in servaddr, cli;

        		sockfd = socket(AF_INET, SOCK_STREAM, 0);
        		if (sockfd == -1) 
			{
                		cout<<"socket creation failed...\n";
                		exit(0);
        		}
        		else
                		cout<<"Socket successfully created..\n";
        		bzero(&servaddr, sizeof(servaddr));
        		servaddr.sin_family = AF_INET;
        		servaddr.sin_addr.s_addr = inet_addr(server_ip);
        		servaddr.sin_port = htons(server_port);
        		if (connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) {
                		cout<<"connection with the server failed...\n";
        		}
        		else
                		cout<<"connected to the server..\n";
		
		}
		~IoTSensor()
		{
			cout<<"Shutdown activities:\n";
			cout<<"Deleing the buffer memory!\n";
			delete buffer;

			unsigned int file_size;
			file_size=myfile.tellg();

			cout<<"Closing all opened files\n";
			myfile.close();
			
			if (file_size==0)
			{
				cout<<"Removing files which do not have any data: "<<getFilename()<<"\n";
				remove(getFilename());
			}

			cout<<"Closing IoTSensor object network connection..\n";

			close(sockfd);
		}

};

void IoTSensor::setFilename(char *file)
{
	strcpy(filename,file);
}

char* IoTSensor::getFilename()
{
	return filename;
}
void IoTSensor::setId(string sen_id)
{
	id = sen_id;
}
string IoTSensor::getId()
{
	return id;
}
void IoTSensor::setX(int sen_x)
{
	x = sen_x;
}
int IoTSensor::getX()
{
	return x;
}
void IoTSensor::setY(int sen_y)
{
        y = sen_y;
}
int IoTSensor::getY()
{
        return y;
}

void IoTSensor::setSenseValue(float val)
{
	sense_value = val;
	sprintf(buffer,"Value is %f",val);
	
	if (val>sense_thr_file)
	{
		cout<<"Writing to file..\n";
		myfile<<buffer;
	}
	
	if (val>sense_thr_server)
	{
		cout<<"Sending to Server..\n";
		write(sockfd, buffer, strlen(buffer)+1);
	}

}
float IoTSensor::getSenseValue()
{
        return sense_value;
}
void IoTSensor::setBatteryLevel(int level)
{
	battery_level = level;
}
int IoTSensor::getBatteryLevel()
{
	return battery_level;
}



int main()
{
	IoTSensor *isensor[10];
	for (int i=0;i<10;i++)
	{
		char filename[15];
		sprintf(filename,"Sensor%d.txt",i+1);
		float fthr = 0.003;
		float nthr = 0.006;
		isensor[i] = new IoTSensor(filename,"127.0.0.1",12345,fthr,nthr);
	}

	for (int i=0;i<10;i++)
	{
		isensor[i]->setId("sensor"+string(1,'A'+i));
		isensor[i]->setX(i*10);
		isensor[i]->setY(i*10);
		isensor[i]->setSenseValue(i*0.001);
		isensor[i]->setBatteryLevel(100/(i+1));
	}

	for (int i=0;i<10;i++)
	{	
		delete isensor[i];
	}

	return 0;
}

