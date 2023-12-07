#include "Vlasnik.hpp"
#include "VirtualPet.hpp"
#include "Food.hpp"

int main() {

	VirtualPet pet1("Rex", "Pas", 50, 20, false);
	VirtualPet pet2("Zucko", "Macka", 60, 20, false);
	VirtualPet pet3("Ben", "Pas", 80, 20, true);

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

	//int kolicina_hrane = 5;

	//Food::povecajHranu(kolicina_hrane);
	//Food::printHranu();

	//Food::umanjiHranu();
	//Food::printHranu();

	/*if (pet1 == pet2) {
		cout << "Ljubimci su jednaki." << endl;
	}
	if (pet1 != pet2) {
		cout << "Ljubimci su razliciti. " << endl;
	}

	pet1 = pet2;

	++pet1;

	if (pet1 < pet2) {
		cout << "Drugi ljubimac je sretniji od prvog." << endl;
	}
	*/

	std::cout << pet1 << std::endl;
}