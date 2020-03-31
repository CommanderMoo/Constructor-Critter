//Constructor Critter
#include <iostream>
using namespace std;

class Critter
{
public:
	int m_hunger;
	// constructor prototype
	Critter(int hunger = 0);
	void Greet();
};

//constructor definition
Critter::Critter(int hunger) 
{
	cout << "A new critter has been born! " << endl;
	m_hunger = hunger;
}

void Critter::Greet()
{
	cout << "hi. I'm a critter. My hunger level is " << m_hunger << ".\n\n";
}

int main()
{
	Critter crit(7);
	crit.Greet();

	return 0;
}

/*
 Critter::Critter(int hunger = 0, int boredom = 0):
	m_Hunger(hunger)
	m_Boredom(boredom)
	{} // empty constructor body
 */