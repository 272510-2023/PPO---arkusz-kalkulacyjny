#pragma once
#include <string>
using namespace std;

class komorka {
public:
	virtual float getLiczba() = 0;
	virtual string getSlowo() = 0;

	virtual void setLiczba(float _liczba) = 0;
	virtual void setSlowo(string _slowo) = 0;

	virtual int idKomorka() = 0;
};