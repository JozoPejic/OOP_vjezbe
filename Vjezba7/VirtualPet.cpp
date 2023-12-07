#include "VirtualPet.hpp"
#include "Food.hpp"

void VirtualPet::jede() {
	this->bodoviSreca += 10;
	this->bodoviGlad -= 10;
}

void VirtualPet::spava() {
	if (bodoviGlad < 30) {
		this->bodoviSreca += 20;
		this->bodoviGlad += 20;
	}
}

void VirtualPet::igra_se() {
	this->bodoviGlad += 10;
	this->bodoviSreca += 10;
}

string VirtualPet::Ime() {
	return ime;
}

string VirtualPet::Vrsta() {
	return vrsta;
}

int VirtualPet::Glad() {
	return bodoviGlad;
}

int VirtualPet::Sreca() {
	return bodoviSreca;
}

bool VirtualPet::Budan() {
	return budan;
}

bool VirtualPet::operator==(VirtualPet& other) {
	return(ime == other.ime && vrsta == other.vrsta &&
		bodoviGlad == other.bodoviGlad && bodoviSreca == other.bodoviSreca &&
		budan == other.budan);
}

bool VirtualPet::operator!=(VirtualPet& other) {
	return !(this->ime == other.ime);
}

VirtualPet& VirtualPet::operator=(VirtualPet& other) {
	if (this != &other) {
		ime = other.ime;
		vrsta = other.vrsta;
		bodoviGlad = other.bodoviGlad;
		bodoviSreca = other.bodoviSreca;
		budan = other.budan;
	}
	return *this;
}

void VirtualPet::operator++() {
	Food::povecajHranu(1);
	this->bodoviGlad-=5;
}

bool VirtualPet::operator>(VirtualPet& other) {
	return(bodoviSreca > other.bodoviSreca);
}

bool VirtualPet::operator<(VirtualPet& other) {
	return(bodoviSreca < other.bodoviSreca);
}

bool VirtualPet::operator>=(VirtualPet& other) {
	return(bodoviSreca >= other.bodoviSreca);
}

bool VirtualPet::operator<=(VirtualPet& other) {
	return(bodoviSreca <= other.bodoviSreca);
}

std::ostream& operator<<(std::ostream& outputStream, VirtualPet& pet) {
	outputStream << "Ime: " << pet.ime << ", Vrsta: " << pet.vrsta << ", Bodovi: " << pet.bodoviSreca;
	return outputStream;
}