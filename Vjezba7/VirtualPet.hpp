#ifndef VIRTUALPET_HPP
#define VIRTUALPET_HPP

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
	int brojPorcija;
public:

	VirtualPet(string ime, string vrsta, int bodoviSreca = 40, int bodoviGlad = 40, bool budan = true)
		: ime(ime), vrsta(vrsta), bodoviSreca(bodoviSreca), bodoviGlad(bodoviGlad), budan(budan) {}

	void jede();

	void spava();

	void igra_se();

	string Ime();

	string Vrsta();

	int Glad();

	int Sreca();

	bool Budan();

	bool operator==(VirtualPet& other);

	bool operator!=(VirtualPet& other);

	VirtualPet& operator=(VirtualPet& other);

	void operator++();

	bool operator<(VirtualPet& other);

	bool operator>(VirtualPet& other);

	bool operator>=(VirtualPet& other);

	bool operator<=(VirtualPet& other);

	friend std::ostream& operator<<(std::ostream& outputStream, VirtualPet& pet);
};

#endif
