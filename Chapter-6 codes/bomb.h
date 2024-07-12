class Bomb
{
	int x,y,state;
	enum states {DIFFUSED, ACTIVE};
	public:
	Bomb()
	{
		x = rand()%9;
		y = rand()%9;
		state = ACTIVE;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;	
	}
	int getState()
	{
		return state;
	}
	void setState(int istate)
	{
		state = istate;
	}
};
