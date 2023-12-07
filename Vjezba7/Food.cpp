#include "Food.hpp"

int Food::counter = 0;

void Food::povecajHranu(int kolicina) {
	counter += kolicina;

	std::cout << "Uvecano za: " << kolicina << std::endl;
}

void Food::umanjiHranu() {
	if (counter > 0) {
		counter--;
	}
	else {
		std::cout << "Nema vise hrane." << std::endl;
	}
}

void Food::printHranu() {

	std::cout << "Kolicina hrane: " << counter << std::endl;
}

int get_counter() {
	return Food::counter;
}