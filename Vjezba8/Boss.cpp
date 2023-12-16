#include "Boss.hpp"

Boss::Boss(const std::string& name, int health, int damage, const std::string& oruzje)
	: Enemy(name, health, damage), oruzje(oruzje){
	if (oruzje.length() == 0) {
		throw std::invalid_argument("Mora postojati oruzje.\n");
	}
}

void Boss::attack() {
	std::cout << "Boss napada sa: " << oruzje << "\n";
}

void Boss::displayInfo() {
	std::cout << "Ime: " << name << "\nHP: " << health << "\nOruzje: " << oruzje << "\nDamage: " << damage << "\n";
}