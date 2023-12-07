#ifndef VLASNIK_HPP
#define VLASNIK_HPP
#include<iostream>
#include<vector>
#include "VirtualPet.hpp"
#include<random>
#include<chrono>

using namespace std;


class Owner {
public:
	vector<VirtualPet> ljubimci;

	Owner();
	Owner(Owner& drugi);

	void dodajLjubimca(const VirtualPet& ljubimac);
	void nahrani();
	void igrajSe();

	VirtualPet& najsretniji();

	void izvediRandomAkcije();
};


#endif
