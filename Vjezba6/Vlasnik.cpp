#include "Vlasnik.hpp"
#include<algorithm>

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
	auto maxHappiness = max_element(ljubimci.begin(), ljubimci.end(), [](const VirtualPet& ljubimac1, const VirtualPet& ljubimac2) {
		return ljubimac1.Sreca() < ljubimac2.Sreca();
		});

	return *maxHappiness;
}

Owner::Owner():randomEngine(std::chrono::system_clock::now().time_since_epoch().count()) {}

void Owner::izvediRandomAkcije() {
	uniform_int_distribution<int> distribution(0, 2);

	for (auto i : ljubimci) {
		int akcija = distribution(randomEngine);

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