#include<iostream>
using namespace std;
class Layer1 
{
 	public:
  	std::string Layer1Send() const 
	{
   		 return "Layer1: Encode and Send\n";
  	}
  	std::string Layer1Recv() const 
	{
    		return "Layer1: Decode and Recv!\n";
  	}
};
class Layer2 
{
	public:
  	std::string Layer2Send() const 
	{
    		return "Layer2: Frame with Host Address and Send!\n";
  	}		
  	std::string Layer2Recv() const 
	{
    		return "Layer2: Check address and recv frame!\n";
  	}
};

class Layer3
{
	public:
  	std::string Layer3Send() const 
	{
    		return "Layer3: Create a Packet with Network Address and Route it!\n";
  	}		
  	std::string Layer3Recv() const 
	{
    		return "Layer3: Check Soure network address and recv the packet!\n";
  	}
};


class ProtocolStack 
{
 	protected:
  	Layer1 *layer1;
  	Layer2 *layer2;
  	Layer3 *layer3;
 	public:
  	ProtocolStack(Layer1 *l1,Layer2 *l2,Layer3 *l3) 
	{
    		layer1 = l1;
    		layer2 = l2;
    		layer3 = l3;
  	}

  	std::string Send()
       	{
    		std::string packet = "Packet send flow:\n";
    		packet += layer3->Layer3Send();
    		packet += layer2->Layer2Send();
    		packet += layer1->Layer1Send();
    		return packet;
  	}

  	std::string Recv()
       	{
    		std::string packet = "Packet recv flow:\n";
    		packet += layer1->Layer1Recv();
    		packet += layer2->Layer2Recv();
    		packet += layer3->Layer3Recv();
    		return packet;
  	}

};

void ClientCode(ProtocolStack *facade) 
{
  	std::cout << facade->Send();
  	std::cout << facade->Recv();
}

int main() 
{
  	Layer1 *layer1 = new Layer1;
  	Layer2 *layer2 = new Layer2;
  	Layer3 *layer3 = new Layer3;
  	ProtocolStack *facade = new ProtocolStack(layer1,layer2,layer3);
  	ClientCode(facade);

  	delete facade;

  	return 0;
}
