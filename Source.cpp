#include <iostream>
#include <vector>
#include <string>
#include "Osoba.h"
#include "GrupaOsoby.h"

using namespace std;

int main()
{
	/*
	vector<string> foo;
	foo.push_back("test");
	foo.push_back("yolo");
	foo.push_back("GOLEM");
	*/

	Osoba testowyJan("Jan",0);
	GrupaOsoby OsobyVector;

	OsobyVector.dodaj("Andrzej");
	OsobyVector.dodaj("Jacek");
	OsobyVector.dodaj("Marek");
	OsobyVector.dodaj("Iga");
	OsobyVector.usun(2);
	OsobyVector.dodaj("Cycek");


	
	cout << "test";
	OsobyVector.printVec();

	system("pause");
}