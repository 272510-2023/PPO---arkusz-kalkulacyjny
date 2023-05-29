#include <iostream>
#include <string>
#include <vector>
#include "arkusz.h"
#include "inter.h"
using namespace std;

arkusz::arkusz() {
	vector<komorka*> testWiersz;
	for (int i = 0; i < 5; i++) {
		komorka_liczba* dodaj = new komorka_liczba;
		testWiersz.push_back(dodaj);
	}
	skoroszyt.push_back(testWiersz);
}

arkusz::arkusz(int wiersz, int kolumna) {
	vector<komorka*> testWiersz;
	for (int i = 0; i < kolumna; i++) {
		komorka_liczba* dodaj = new komorka_liczba;
		testWiersz.push_back(dodaj);
	}
	for (int i = 0; i < wiersz; i++) {
		skoroszyt.push_back(testWiersz);
	}
}

int arkusz::getKolumne() {
	return skoroszyt[0].size();
}

void arkusz::dodajKolumne() {
	komorka_liczba* test = new komorka_liczba();
	for (int i = 0; i < skoroszyt.size(); i++) {
		skoroszyt[i].push_back(test);
	}
}

int arkusz::getWiersz() {
	return skoroszyt.size();
}

void arkusz::dodajWiersz() {
	vector<komorka*> testWiersz;
	for (int i = 0; i < skoroszyt[0].size(); i++) {
		komorka_liczba* dodaj = new komorka_liczba;
		testWiersz.push_back(dodaj);
	}
	skoroszyt.push_back(testWiersz);
}

void arkusz::setKomorka(int wiersz, int kolumna, komorka* dodaj) {
	skoroszyt[wiersz][kolumna] = dodaj;
}

void arkusz::drukuj() {
	for (int i = 0; i < skoroszyt.size(); i++) {
		for (int j = 0; j < skoroszyt[i].size(); j++) {
			if (skoroszyt[i][j]->idKomorka() == 0) {
				cout << " | " << skoroszyt[i][j]->getLiczba();
			}
			else {
				cout << " | " << skoroszyt[i][j]->getSlowo();
			}
		}
		cout << " |" << endl;
	}
}