#include "Vlasnik.hpp"
#include "VirtualPet.hpp"
#include<algorithm>
#include<cstdlib>
#include<ctime>

Owner::Owner(Owner& other) : ljubimci(other.ljubimci) {}

void Owner::dodajLjubimca(const VirtualPet& ljubimac) {
	ljubimci.push_back(ljubimac);
}

void Owner::nahrani() {
	for (auto& i : ljubimci) {
		i.jede();
	}
}

void Owner::igrajSe() {
	for (auto& i : ljubimci) {
		i.igra_se();
	}
}

VirtualPet& Owner::najsretniji() {
	auto maxHappiness = max_element(ljubimci.begin(), ljubimci.end(), [](VirtualPet& ljubimac1, VirtualPet& ljubimac2) {
		return ljubimac1.Sreca() < ljubimac2.Sreca();
		});

	return *maxHappiness;
}

Owner::Owner(){
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

void Owner::izvediRandomAkcije() {
	for (auto i : ljubimci) {
		int akcija = std::rand()%3;

		switch (akcija) {
		case 0:
			i.jede();
			break;
		case 1:
			i.igra_se();
			break;
		case 2:
			i.spava();
			break;
		default:
			break;
		}
	}
}