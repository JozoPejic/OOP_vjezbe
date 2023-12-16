#ifndef ENEMY_HPP
#define ENEMY_HPP

#include<iostream>
#include<string>
#include<stdexcept>

class Enemy {
public:
	std::string name;
	int health;
	int damage;

	Enemy(const std::string& name, int health, int damage);

	virtual void attack() = 0;
	virtual void displayInfo() = 0;
	virtual ~Enemy() = default;

};

#endif