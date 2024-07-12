#include<iostream>
#include<vector>
using namespace std;
class RequestHandler 
{
 	public:
 	virtual RequestHandler *SetNextServer(RequestHandler *handler) = 0;
  	virtual void ProcessRequest(string request) = 0;
};
class RequestHandlerImpl : public RequestHandler 
{
 	private:
  	RequestHandler *nextServer;

 	public:
  	RequestHandlerImpl() : nextServer(nullptr) 
	{
  	}
  	RequestHandler *SetNextServer(RequestHandler *handler)
	{
    		nextServer = handler;
    		return handler;
  	}
  	void  ProcessRequest(string request)
  	{
    		if (nextServer) 
		{
      			nextServer->ProcessRequest(request);
    		}

  	}
};
class AuthRequestHandler : public RequestHandlerImpl 
{
 	public:
  	void ProcessRequest(string request)
  	{
      		cout<<"Authentication check..!\n";	  
      		RequestHandlerImpl::ProcessRequest(request);
  	}
};
class CompressRequestHandler : public RequestHandlerImpl 
{
 	public:
  	void ProcessRequest(string request)
  	{
      		cout<<"Data Compressed..!\n";
      		RequestHandlerImpl::ProcessRequest(request);
  	}
};
class CacheRequestHandler : public RequestHandlerImpl 
{
 	public:
  	void ProcessRequest(string request)
  	{
      		cout<<"Request Cached..!\n";	  
      		RequestHandlerImpl::ProcessRequest(request);
  	}
};
void ClientCode(RequestHandler &handler) 
{
    string input = "data";	  
    handler.ProcessRequest(input);
}
int main() 
{
  	AuthRequestHandler *auth = new AuthRequestHandler;
  	CompressRequestHandler *compress = new CompressRequestHandler;
  	CacheRequestHandler *cache = new CacheRequestHandler;
  	auth->SetNextServer(compress)->SetNextServer(cache);

  	ClientCode(*auth);
  	ClientCode(*compress);
  	ClientCode(*cache);

  	delete auth;
  	delete compress;
  	delete cache;

  	return 0;
}
