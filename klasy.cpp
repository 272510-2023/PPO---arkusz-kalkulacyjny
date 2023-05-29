#include <iostream>
#include <string>
#include "klasy.h"
#include "inter.h"
using namespace std;

komorka_liczba::komorka_liczba() {
	liczba = 0;
}

komorka_liczba::komorka_liczba(float _liczba) {
	liczba = _liczba;
}

float komorka_liczba::getLiczba() {
	return liczba;
}

void komorka_liczba::setLiczba(float _liczba) {
	liczba = _liczba;
}

int komorka_liczba::idKomorka() {
	return 0;
}

string komorka_liczba::getSlowo() {
	return " ";
}

void komorka_liczba::setSlowo(string _slowo) {

}


komorka_slowo::komorka_slowo() {
	slowo = "";
}

komorka_slowo::komorka_slowo(string _slowo) {
	slowo = _slowo;
}

string komorka_slowo::getSlowo() {
	return slowo;
}

void komorka_slowo::setSlowo(string _slowo) {
	slowo = _slowo;
}

int komorka_slowo::idKomorka() {
	return 1;
}

float komorka_slowo::getLiczba() {
	return 0;
}

void komorka_slowo::setLiczba(float _liczba) {

}