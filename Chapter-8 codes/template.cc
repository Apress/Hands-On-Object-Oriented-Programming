#include<iostream>
using namespace std;
class GameCharacter 
{
	public:
  	void PlanOfAction() 
	{
    		Observes();
    		ExplorePaths();
    		ReactToOpponents();
    		ReacToWeapons();
    		ReacToWealth();
    		ReacToSecrets();
  	}
	protected:
  	void Observes() 
	{
    		std::cout << "Observing gaming evniornment\n";
  	}
  	void ExplorePaths() 
	{
    		std::cout << "Exploring paths to move forward\n";
  	}
  	void ReactToOpponents() 
	{
    		std::cout << "Attacking..\n";
  	}
  	virtual void ReacToWeapons() = 0;
  	virtual void ReacToWealth()  = 0;
  	virtual void ReacToSecrets() {}
};
class Player : public GameCharacter 
{
	protected:
  	void ReacToWeapons() 
	{
    		std::cout << "Check opponets and run towards the weapons\n";
  	}
  	void ReacToWealth() 
	{
    		std::cout << "Check any danager events and run towards the wealth\n";
  	}
	void ReacToSecrets()
	{
    		std::cout << "Carefully explore paths and get the secret\n";
	}
};
class Enemy : public GameCharacter 
{
	protected:
  	void ReacToWeapons() 
	{
    		std::cout << "Immediatly jump and run towards the weapons\n";
  	}
  	void ReacToWealth() 
	{
    		std::cout << "By attacking players and try to grab the wealth\n";
  	}
};
void ClientCode(GameCharacter *gc) 
{
  	gc->PlanOfAction();
}

int main() 
{
  	std::cout << "Player actions:\n";
  	Player *p1 = new Player;
  	ClientCode(p1);
  	std::cout << "\n";
  	std::cout << "Enemy actions:\n";
  	Enemy *e1 = new Enemy;
  	ClientCode(e1);
  	delete p1;
  	delete e1;
  	return 0;
}
