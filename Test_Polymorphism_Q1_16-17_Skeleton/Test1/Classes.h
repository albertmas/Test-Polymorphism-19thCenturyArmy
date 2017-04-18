/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef CLASSES_H
#define CLASSES_H



// TO DO: Implement the base class Battalion here

class Battalion
{
protected:
	char* _name;

public:
	Battalion::Battalion(char* pname)
	{
		_name = pname;
	}
	char* getName()
	{
		return _name;
	}
	const virtual int combatValue() = 0;
};

// TO DO: Implement the derived class Infantry here

class Infantry : public Battalion
{
private:
	int _bayonetSoldiers = 0;
	int _musketSoldiers = 0;

public:
	Infantry(char* pname, int pbayonet, int pmusket) : Battalion(pname)
	{
		_name = pname;
		_bayonetSoldiers = pbayonet;
		_musketSoldiers = pmusket;
	}
	const virtual int Infantry::combatValue()
	{
		return (_bayonetSoldiers + _musketSoldiers * 2);
	}
};

// TO DO: Implement the derived class Chivalry here

class Chivalry : public Battalion
{
private:
	int _lightChivalry = 0;
	int _heavyChivalry = 0;

public:
	Chivalry(char* pname, int plight, int pheavy) : Battalion(pname)
	{
		_name = pname;
		_lightChivalry = plight;
		_heavyChivalry = pheavy;
	}
	const virtual int Chivalry::combatValue()
	{
		return (_lightChivalry * 3 + _heavyChivalry * 4);
	}
};

// TO DO: Implement the derived class Artillery here

class Artillery : public Battalion
{
private:
	int _mortars = 0;
	int _cannons = 0;

public:
	Artillery(char* pname, int pmortars, int pcannons) : Battalion(pname)
	{
		_name = pname;
		_mortars = pmortars;
		_cannons = pcannons;
	}
	const virtual int Artillery::combatValue()
	{
		return (_mortars * 5 + _cannons * 6);
	}
};

char* victoryInBattlefield(Battalion* div1, Battalion* div2)
{
	// TO DO: introduce the code of the function here

	if (div1->combatValue() > div2->combatValue())
		return div1->getName();
	if (div1->combatValue() < div2->combatValue())
		return div2->getName();
	if (div1->combatValue() == div2->combatValue())
		return ("Same combat value");

}


#endif // CLASSES_H