#include "Vlasnik.hpp"
#include "VirtualPet.hpp"

int main() {

	VirtualPet pet1("Rex", "Pas", 0, 0, true);
	VirtualPet pet2("Zucko", "Macka", 0, 0, false);
	VirtualPet pet3("Ben", "Pas", 0, 0, true);

	Owner Vlasnik1;
	Vlasnik1.dodajLjubimca(pet1);
	Vlasnik1.dodajLjubimca(pet2);
	Vlasnik1.dodajLjubimca(pet3);

	Owner Vlasnik2 = Vlasnik1;

	Vlasnik1.izvediRandomAkcije();
	Vlasnik2.izvediRandomAkcije();

	VirtualPet& happiestPet1 = Vlasnik1.najsretniji();
	VirtualPet& happiestPet2 = Vlasnik2.najsretniji();

	std::cout << "Najsretniji ljubimac vlasnika 1: " << happiestPet1.Ime() << " vrsta: " << happiestPet1.Vrsta() << std::endl;
	std::cout << "Sreca: " << happiestPet1.Sreca() << " Glad: " << happiestPet1.Glad() << std::endl;

	std::cout << "Najsretniji ljubimac vlasnika 2: " << happiestPet2.Ime() << " vrsta: " << happiestPet2.Vrsta() << std::endl;
	std::cout << "Sreca: " << happiestPet2.Sreca() << " Glad: " << happiestPet2.Glad() << std::endl;
}