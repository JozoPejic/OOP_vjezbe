#ifndef VECTOR_H
#define VECTOR_H

#include<iostream>
#include<vector>

using namespace std;

struct Vector {

	int* niz;

	int logicka_velicina, fizicka_velicina;

	void vector_new(int);
	void vector_delete();
	void vector_push_back(int);
	void vector_pop_back();
	int& vector_front();
	int& vector_back();
	int vector_size();
	void printanje_vectora();
};

#endif
