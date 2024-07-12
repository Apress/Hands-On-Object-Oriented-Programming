#include<iostream>
using namespace std;
class PlayerB;
class PlayerA
{
	private:
	int id;
	int x,y;
	void setId(int iid);
	int getId();
	void setX(int ix);
	int getX();
	void setY(int iy);
	int getY();
	void myFriendLocation(PlayerB p1);
	friend void friendtoAB(PlayerA *pa, PlayerB* pb);
	friend class PlayerB;
	
};
void PlayerA::setId(int iid)
{
	id = iid;
}
int PlayerA::getId()
{
	return id;
}
void PlayerA::setX(int ix)
{
	x = ix;
}
void PlayerA::setY(int iy)
{
	y = iy;
}
int PlayerA::getX()
{
	return x;
}
int PlayerA::getY()
{
	return y;
}
class PlayerB
{
	private:
	int id;
	int x,y;
	void setId(int iid);
	int getId();
	void setX(int ix);
	int getX();
	void setY(int iy);
	int getY();

	void myFriendLocation(PlayerA p1);
	friend void friendtoAB(PlayerA *pa, PlayerB* pb);
	friend class PlayerA;
};
void PlayerB::setId(int iid)
{
	id = iid;
}
int PlayerB::getId()
{
	return id;
}
void PlayerB::setX(int ix)
{
	x = ix;
}
void PlayerB::setY(int iy)
{
	y = iy;
}
int PlayerB::getX()
{
	return x;
}
int PlayerB::getY()
{
	return y;
}

void PlayerB::myFriendLocation(PlayerA p1)
{
	cout<<"My Id is "<<getId()<<"and My friend "<<p1.getId()<<"is located at secret location (x,y):"<<p1.getX()<<","<<p1.getY()<<"\n";
}
void PlayerA::myFriendLocation(PlayerB p1)
{
	cout<<"My Id is "<<getId()<<"and My friend "<<p1.getId()<<"is located at secret location (x,y):"<<p1.getX()<<","<<p1.getY()<<"\n";
}

void friendtoAB(PlayerA *pa, PlayerB* pb)
{
	pa->setId(100);
	pa->setX(10);
	pa->setY(10);
	pb->setId(200);
	pb->myFriendLocation(*pa);
	pb->setX(20);
	pb->setY(20);
	pa->myFriendLocation(*pb);
}

int main()
{
	PlayerA pa;
	PlayerB pb;
	friendtoAB(&pa,&pb);
}

