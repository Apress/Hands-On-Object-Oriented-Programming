#include<iostream>
#include<thread>
using namespace std;
class DataBase
{

	private:
    	DataBase(const std::string value)
    	{
		record = value;
    	}

    	static DataBase* dbo;
    	string record;

	public:

    	DataBase(DataBase &other) = delete;
    	void operator=(const DataBase &) = delete;
    	static DataBase *GetInstance(std::string value);
    	std::string getRecord()
	{
        	return record;
    	} 
    	void setRecord(string val) 
	{
        	record =  val;
    	} 
};

DataBase* DataBase::dbo= nullptr;;

DataBase *DataBase::GetInstance(std::string value)
{
    	if(dbo==nullptr)
    	{
        	dbo = new DataBase(value);
    	}
	dbo->setRecord(value);
    	return dbo;
}


int main()
{
    	DataBase* db1 = DataBase::GetInstance("Record1");
    	DataBase* db2 = DataBase::GetInstance("Record2");
	cout<<db1->getRecord();
    	return 0;
}
