#include <iostream>
#include <string>
using namespace std;
class Server 
{
 	public:
  	virtual void Request(string request) = 0;
};

class ApplicationServer: public Server 
{
 	string request;	
 	public:
  	void Request(string input)  
	{
    		std::cout << "Application server Handling request.\n";
  	}
  	string getInput()
  	{
	  	return request;
  	}
};
class Proxy: public Server 
{
  	private:
  	ApplicationServer *as;
  	bool cacheRequest(ApplicationServer *as) 
	{
    		std::cout << "Proxy: caches requesting details"<<as->getInput()<<"\n";
    		return true;
  	}
  
 	public:
  	Proxy(ApplicationServer *as):as(new ApplicationServer(*as))
  	{
  	}

  	~Proxy() 
  	{
    		delete as;
  	}

  	void Request(string request) 
  	{
	  	cacheRequest(as);
	  	as->Request(request);
  	}
};

void ClientCode(Server &ser,string input) 
{
  	ser.Request(input);
}

int main() 
{
  	std::cout << "Client: Executing the client code with a real subject:\n";
  	ApplicationServer *ras = new ApplicationServer;
  	string inp;
  	ClientCode(*ras,inp);
  	std::cout << "\n";
  	std::cout << "Client: Executing the same client code with a proxy:\n";
  	Proxy *proxy = new Proxy(ras);
  	ClientCode(*proxy,inp);

  	delete ras;
  	delete proxy;
  	return 0;
}

