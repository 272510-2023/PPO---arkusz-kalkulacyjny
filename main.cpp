#include <iostream>
#include <string>
#include <vector>
#include "arkusz.h"
using namespace std;

int main() {
	string test;
	do {
		cout << "Czy chcesz podac rozmiar tablicy? ";
		cin >> test;
	} while (test != "tak" && test != "nie");
	int wiersz = 1, kolumna = 7;
	if (test == "tak") {
		do {
			cout << "Ile wierszy: ";
			cin >> wiersz;
		} while (wiersz <= 0);
		do {
			cout << "Ile kolumn: ";
			cin >> kolumna;
		} while (kolumna <= 0);
	}
	arkusz skoroszyt(wiersz, kolumna);
	cout << "To twoja tabela: " << endl;
	skoroszyt.drukuj();

	while (true) {
		int czynnosc = 0;
		cout << "1.Dodaj coœ do tableli\n";
		cout << "2.Dodaj wiersz\n";
		cout << "3.Dodaj kolumne\n";
		cout << "4.Wyswietl tabele\n";
		cout << "5.Suma\n";
		cout << "6.Srednia\n";
		cout << "7.Wczytaj z dysku\n";
		cout << "8.Zapisz na dysku\n";
		cout << "0.Zakoncz program\n";

		do {
			cout << "Co chcesz zrobic? ";
			cin >> czynnosc;
		} while (czynnosc < 0 || czynnosc > 8);

		switch (czynnosc) {
		case 2:
			skoroszyt.dodajKolumne();
			break;
		case 3:
			skoroszyt.dodajWiersz();
			break;
		case 4:
			skoroszyt.drukuj();
			break;
		case 0:
			break;
		default:
			return 0;
			break;
		}
	}
}
