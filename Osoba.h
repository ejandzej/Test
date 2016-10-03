#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Osoba
{
private:
	int ID;
	string Nazwa;

public:
	Osoba();
	Osoba(string n, int i); //dodaj ID
	~Osoba();
	Osoba drukuj();

	int getID();
};