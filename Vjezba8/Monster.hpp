#include "Enemy.hpp"

class Monster : public Enemy {
public:
	std::string sposobnost;

	Monster(const std::string& name, int health, int damage, const std::string& sposobnost);

	void attack();

	void displayInfo();
};