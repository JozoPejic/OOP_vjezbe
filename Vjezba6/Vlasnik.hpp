#ifndef VLASNIK_HH
#define VLASNIK_HH
#include<iostream>
#include<vector>
#include "VirtualPet.hpp"
#include<random>
#include<chrono>

using namespace std;


class Owner {
public:
	vector<VirtualPet> ljubimci;

	std::default_random_engine randomEngine;

	Owner();
	Owner(Owner& drugi);

	void dodajLjubimca(const VirtualPet& ljubimac);
	void nahrani();
	void igrajSe();

	VirtualPet& najsretniji();

	void izvediRandomAkcije();
};


#endif
