#include<iostream>
#include<stdlib.h>
#include<vector>
#include"customer.h"
#include"shopkeeper.h"
#include"item.h"
#include"deliverypartner.h"
#include"order.h"
#include"cancelled.h"
#include"deliverorder.h"
using namespace std;
void customers_register(Customer &c1, Customer &c2)
{
	c1.setCid("C001");
        c1.setName("Customer1");
        char phone[11];
        strcpy(phone,"9000000000");
        c1.setPhone(phone);
        c1.setCity("City1");
        c1.setCountry("Country1");
        c1.setPin(100001);
	cout<<"Customer "<<c1.getCid()<<" was registered\n";
	c2.setCid("C002");
        c2.setName("Customer2");
        char phone2[11];
        strcpy(phone2,"9000000001");
        c2.setPhone(phone);
        c2.setCity("City2");
        c2.setCountry("Country2");
        c2.setPin(100002);
	cout<<"Customer "<<c2.getCid()<<" was registered\n";
}

void shopkeeper_register(Shopkeeper &s1)
{
	s1.setSid("S001");
        s1.setName("Shopkeeper1");
        char phone[11];
        strcpy(phone,"8000000000");
        s1.setPhone(phone);
        s1.setCity("SCity1");
        s1.setCountry("SCountry1");
        s1.setPin(200001);
	cout<<"Shopkeeper "<<s1.getSid()<<" was registered\n";
}

void delpartner_register(DeliveryPartner &d1, DeliveryPartner &d2)
{
	d1.setDid("DP001");
        d1.setName("DPartner1");
        char phone[11];
        strcpy(phone,"7000000000");
        d1.setPhone(phone);
	cout<<"Delivery partner "<<d1.getDid()<<" was registered\n";
	d2.setDid("DP002");
        d2.setName("DPartner2");
        char phone2[11];
        strcpy(phone2,"7000000001");
        d2.setPhone(phone);
	cout<<"Delivery partner "<<d2.getDid()<<" was registered\n";
}
void items_insert(Item &i1,Item &i2,Item &i3, Item &i4)
{
        i1.setIid("I001");
        i1.setName("Item1");
        i1.setPrice(1000);
        i1.setQty(10);
        i1.setDescr("Fashion product");
	cout<<"Item "<<i1.getIid()<<" was entered\n";

        i2.setIid("I002");
        i2.setName("Item2");
        i2.setPrice(2000);
        i2.setQty(10);
        i2.setDescr("Entertainment product");
	cout<<"Item "<<i2.getIid()<<" was entered\n";

        i3.setIid("I003");
        i3.setName("Item3");
        i3.setPrice(3000);
        i3.setQty(10);
        i3.setDescr("Smart product");
	cout<<"Item "<<i3.getIid()<<" was entered\n";

        i4.setIid("I004");
        i4.setName("Item4");
        i4.setPrice(4000);
        i4.setQty(10);
        i4.setDescr("Electronic product");
	cout<<"Item "<<i4.getIid()<<" was entered\n";
}
void items_browsing (Item &i)
{
	cout<<"Item id:"<<i.getIid()<<" Price "<<i.getPrice()<<" Descr "<<i.getDescr()<<"\n";
}
void customer_disp (Customer &c)
{
	cout<<"Customer id:"<<c.getCid()<<" Phone "<<c.getPhone()<<" City "<<c.getCity()<<"\n";
}
void deliverp_disp (DeliveryPartner &d)
{
	cout<<"DeliveryPartner id:"<<d.getDid()<<" Phone "<<d.getPhone()<<"\n";
}

Order* placeOrder(Customer &c1, Item &i1,unsigned int qty)
{
	if (i1.getQty()>=qty)
	{
		Order *o1 = new Order();
		o1->setCid(c1.getCid());
		o1->setIid(i1.getIid());
		unsigned int cost = qty*i1.getPrice();
		i1.setQty(i1.getQty()-qty);
		o1->setCost(cost);
		o1->setOdate("ODate1");
		o1->setStatus("Processing");
		o1->updateCount();
		o1->setOid("O001"+string(1,'A'+o1->getCount()));
		return o1;
	}
	return NULL;	

}
CancelledOrder* cancelOrder(Customer &c1, Order *o1)
{
	if (o1->getStatus()=="Processing")
	{
		CancelledOrder *c1 = new CancelledOrder();
		c1->setCoid(o1->getOid());
		c1->setCdate("Cdate1");
		c1->setRefund(o1->getCost());
		c1->setRdate("Rdate1");
		o1->setStatus("Cancelled");
		return c1;

	}
	return NULL;
}

DeliveredOrder* deliverOrder(DeliveryPartner &p, Order *o1)
{
	if (o1->getStatus()=="Processing")
	{
		DeliveredOrder *d1 = new DeliveredOrder();
		d1->setDoid(o1->getOid());
		d1->setDpid(p.getDid());
		d1->setDdate("Ddate1");
		o1->setStatus("Delivered");
		return d1;

	}
	return NULL;
}
void browseCustOrders(Customer &c1, vector<Order*> &ov)
{
	for (Order *o: ov)
	{
		if (o->getCid() == c1.getCid())
		{
			cout<<"Order Id"<<o->getOid()<<" date:"<<o->getOdate()<<"cost : "<<o->getCost()<<"status:"<<o->getStatus()<<"\n";
		}
	}
}

void browseOrders(vector<Order*> &ov)
{
	for (Order *o: ov)
	{
		cout<<"Order Id"<<o->getOid()<<" date:"<<o->getOdate()<<"cost : "<<o->getCost()<<"status:"<<o->getStatus()<<"\n";
	}
}

void browseRefOrders(vector<Order*> &ov,vector<CancelledOrder*> &cv)
{
	for (Order *c: ov)
	{
		if (c->getStatus()=="Refunded")
		{	
			for (CancelledOrder *co: cv)
			{
				if (co->getCoid()==c->getOid())
				{
					cout<<"Order Id"<<co->getCoid()<<" date:"<<co->getRdate()<<"Refund : "<<co->getRefund()<<"status:"<<c->getStatus()<<"\n";
				}
			}
		}
	}
}
void browseCanOrders(vector<CancelledOrder*> &cv)
{
	for (CancelledOrder *c: cv)
	{
		cout<<"Cancelled Order "<<c->getCoid()<<" refund date:"<<c->getRdate()<<"total refund: "<<c->getRefund()<<"\n";
	}
}

void browseDelOrders(vector<DeliveredOrder*> &dv)
{
	for (DeliveredOrder *d: dv)
	{
		cout<<"Delivered Order "<<d->getDoid()<<" Deliver date:"<<d->getDdate()<<"Delivery Partner: "<<d->getDpid()<<"\n";
	}
}
void processCanOrders(vector<Order*> &ov,vector<CancelledOrder*> &cv)
{
	for (CancelledOrder *c: cv)
	{
		for (Order *o: ov)
		{
			if(c->getCoid()==o->getOid())
			{
				o->setStatus("Refunded");
			}
		}
	}
}

void processOrders(vector<Order*> &ov,vector<DeliveredOrder*> &dv,DeliveryPartner &dp1, DeliveryPartner &dp2)
{
        int count = 0;
        DeliveredOrder *d;
        for (Order *ov1: ov)
        {
                if (ov1->getStatus()=="Processing")
                {
                        if (count%2 == 0)
                        {
                                d = deliverOrder(dp1,ov1);
                                count = count+1;
                        }
                        else
                        {
                                d = deliverOrder(dp2,ov1);
                                count = count+1;
                        }
                        cout<<"Order "<<d->getDoid()<<" will be delivered by:"<<d->getDdate()<<"\n";
                        cout<<"Order "<<d->getDoid()<<" will be delivered by Delivery Partner:"<<d->getDpid()<<"\n";
                        dv.push_back(d);
                }
        }
}


int main()
{
	vector<Order*> ov;
	vector<CancelledOrder*> cv;
	vector<DeliveredOrder*> dv;
	Customer c1,c2;
	customers_register(c1,c2);	
	Shopkeeper s1;
	shopkeeper_register(s1);
	DeliveryPartner dp1,dp2;
	delpartner_register(dp1,dp2);
	Item i1,i2,i3,i4;
	items_insert(i1,i2,i3,i4);

	customer_disp(c1);
	customer_disp(c2);

	items_browsing(i1);
	items_browsing(i2);
	items_browsing(i3);
	items_browsing(i4);

	Order *o1;
	o1 = placeOrder(c1,i1,2);
	ov.push_back(o1);
	Order *o2;
	o2 = placeOrder(c2,i2,2);
	ov.push_back(o2);
	Order *o3;
	o3 = placeOrder(c2,i3,2);
	ov.push_back(o3);
	Order *o4;
	o4 = placeOrder(c1,i4,2);
	ov.push_back(o4);

	CancelledOrder *co;
	if (o1->getStatus()=="Processing")
	{
		co = cancelOrder(c1,o1);
		cout<<"In process\n";
		cout<<"Order "<<co->getCoid()<<" was cancelled successfully\n"; 
		cout<<"Cancelled Order "<<co->getCoid()<<" will be refunded by:"<<co->getRdate()<<"\n";
		cout<<"Cancelled Order "<<co->getCoid()<<" total refund: "<<co->getRefund()<<"\n";
		cv.push_back(co);

	}
	cout<<"Customer"<<c1.getCid()<<"orders:\n";
	browseCustOrders(c1,ov);
	cout<<"Customer"<<c2.getCid()<<"orders:\n";
	browseCustOrders(c2,ov);
	
	cout<<"List of orders\n";
	browseOrders(ov);
	cout<<"List of Cancelled orders\n";
	browseCanOrders(cv);
	cout<<"List of Delivery partners\n";
	deliverp_disp (dp1);
	deliverp_disp (dp2);
	cout<<"List of Processing orders for delivery\n";
	processOrders(ov,dv,dp1,dp2);
	cout<<"List of Delivered orders\n";
	browseDelOrders(dv);
	processCanOrders(ov,cv);
	cout<<"List of Refunded orders\n";
	browseRefOrders(ov,cv);



}
