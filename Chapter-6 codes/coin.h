class Coin
{
	int state;
        int x,y,value;
	enum states {COLLECTED, AVAILABLE};
        public:
        Coin()
        {
                x = rand()%9+8;
                y = rand()%9+8;
                value = rand()%100;
		state = AVAILABLE;
        }
        int getX()
        {
                return x;
        }
	int getY()
	{
		return y;
	}
        int getValue()
        {
                return value;
        }
        void setValue(int ival)
        {
                value = ival;
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

