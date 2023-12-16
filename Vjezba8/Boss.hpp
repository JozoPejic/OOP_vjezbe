#ifndef BOSS_HPP
#define BOSS_HPP

#include "Enemy.hpp"

class Boss : public Enemy {
public:
	std::string oruzje;

	Boss(const std::string& name, int health, int damage, const std::string& oruzje);

	void attack();

	void displayInfo();
};

#endif