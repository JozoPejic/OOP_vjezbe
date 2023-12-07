#ifndef FOOD_HH
#define FOOD_HH

#include<iostream>

class Food {
private:
	static int counter;
public:

	static void povecajHranu(int kolicina);
	static void umanjiHranu();
	static void printHranu();
	friend int get_counter();
};

#endif