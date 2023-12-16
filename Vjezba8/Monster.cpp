#include "Monster.hpp"

Monster::Monster(const std::string& name, int health, int damage, const std::string& sposobnost) : Enemy(name, health, damage), sposobnost(sposobnost){
	if (sposobnost.length() == 0) {
		throw std::invalid_argument("Mora postojati sposobnost.\n");
	}
}

void Monster::attack() {
	std::cout << "Monster napada sa: " << sposobnost << std::endl;
}

void Monster::displayInfo() {
	std::cout << "Ime: " << name << "\nHP: " << health << "\nSposobnost: " << sposobnost << "\nDamage: " << damage;
}