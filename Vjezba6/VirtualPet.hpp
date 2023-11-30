#ifndef KLASE_HH
#define KLASE_HH

#include<iostream>
#include<vector>

using namespace std;

class VirtualPet {
private:
	string ime;
	string vrsta;
	int bodoviSreca;
	int bodoviGlad;
	bool budan;
public:
	VirtualPet(string ime, string vrsta, int bodoviSreca = 40, int bodoviGlad = 40, bool budan = true)
		: ime(ime), vrsta(vrsta), bodoviSreca(bodoviSreca), bodoviGlad(bodoviGlad), budan(budan){}

	void jede();

	void spava();

	void igra_se();

	string Ime() const;

	string Vrsta() const;

	int Glad() const;

	int Sreca() const;

	bool Budan() const;
};

#endif