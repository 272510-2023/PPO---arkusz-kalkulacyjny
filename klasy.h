#pragma once
#include <string>
#include "inter.h"
using namespace std;

class komorka_liczba : public komorka {
private: 
	float liczba;

public:
	komorka_liczba();
	komorka_liczba(float _liczba);

	float getLiczba();
	void setLiczba(float _liczba);

	string getSlowo();
	void setSlowo(string _slowo);

	int idKomorka();
};

class komorka_slowo : public komorka {
private:
	string slowo;

public:
	komorka_slowo();
	komorka_slowo(string _slowo);

	string getSlowo();
	void setSlowo(string _slowo);

	float getLiczba();
	void setLiczba(float _liczba);

	int idKomorka();
};