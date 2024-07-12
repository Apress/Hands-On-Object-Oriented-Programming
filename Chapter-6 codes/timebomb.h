class TimeBomb:public Bomb
{
	int id;
	unsigned int timer;
	public:
	void setState(int istate)
	{
		Bomb::setState(istate);
		timer = 10;
	}
	void setId(int iid)
	{
		id = iid;
	}
	int getId()
	{
		return id;
	}
	void setTimer(unsigned int time)
	{
		enum state {DIFFUSED,ACTIVE};
		timer = time;
		if (timer > 0)
		{
			Bomb::setState(ACTIVE);
		}
		else
		{
			Bomb::setState(DIFFUSED);
		}
	}
	unsigned int getTimer()
	{
		return timer;
	}
};
