#include "VirtualPet.hpp"

void VirtualPet::jede() {
	bodoviSreca += 10;
	bodoviGlad -= 10;
}

void VirtualPet::spava() {
	if (bodoviGlad < 30) {
		bodoviSreca += 20;
		bodoviGlad += 20;
	}
}

void VirtualPet::igra_se() {
	bodoviGlad += 10;
	bodoviSreca += 10;
}

string VirtualPet::Ime() const {
	return ime;
}

string VirtualPet::Vrsta() const {
	return vrsta;
}

int VirtualPet::Glad() const {
	return bodoviGlad;
}

int VirtualPet::Sreca() const {
	return bodoviSreca;
}

bool VirtualPet::Budan() const {
	return budan;
}