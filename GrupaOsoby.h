#pragma once
#include <iostream>
#include "Osoba.h"

using namespace std;

class GrupaOsoby
{
private:
	vector <Osoba> vecOsoby;

public:
	void dodaj(string nazwa);
	void usun(int id);
	void printVec();
};
