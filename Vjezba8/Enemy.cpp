#include "Enemy.hpp"

Enemy::Enemy(const std::string& name, int health, int damage) : name(name), health(health), damage(damage){
	if (health < 0 || damage < 0) {
		throw std::invalid_argument("Parametri ne mogu biti negativni!");
	}
}