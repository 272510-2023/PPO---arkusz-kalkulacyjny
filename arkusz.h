#pragma once
#include <string>
#include <vector>
#include "inter.h"
#include "klasy.h"
using namespace std;

class arkusz {
private:
	vector<vector<komorka*>> skoroszyt;

public:
	arkusz();
	arkusz(int wiersz, int kolumna);

	void setKomorka(int wiersz, int kolomna, komorka* dodaj);

	int getWiersz();
	int getKolumne();

	void dodajWiersz();
	void dodajKolumne();

	void drukuj();

};