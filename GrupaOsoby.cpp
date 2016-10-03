#include "GrupaOsoby.h"
#include "Osoba.h"

void GrupaOsoby::dodaj(string nazwa)
{
	int id;
	if (vecOsoby.size() == 0)
	{
		vecOsoby.push_back(Osoba(nazwa, 1));
	}
	else
	{
		id = vecOsoby.back().getID();
		id = id + 1;
		vecOsoby.push_back(Osoba(nazwa, id));
	}
}

void GrupaOsoby::usun(int i)
{
	vecOsoby.erase(vecOsoby.begin() + i-1);
}

void GrupaOsoby::printVec()
{
	for (int i = 0; i < vecOsoby.size(); i++)
	{
		vecOsoby[i].drukuj();
	}
}
