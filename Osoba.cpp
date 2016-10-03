#include "Osoba.h"
#include <string>

Osoba::Osoba()
{
	ID = 0;
	Nazwa = 'xxx';
}

Osoba::~Osoba() {}

Osoba Osoba::drukuj()
{
	cout << Nazwa << " " << ID << endl;
	return *this;
}

int Osoba::getID()
{
	return ID;
}

Osoba::Osoba(string n, int i)
{
	this->Nazwa = n;
	this->ID = i;
}


