#ifndef MATRICA_HPP
#define MATRICA_HPP

#include<iostream>
#include<random>
#include<iomanip>
#include<cstdlib>

using namespace std;

struct Matrica {

	int redovi, stupci;
	float** clan;
};

void unosMatrice(Matrica&);
Matrica generiranjeMatrice(int, int, float, float);
Matrica zbrajanjeMatrica(Matrica&, Matrica&);
Matrica oduzimanjeMatrica(Matrica&, Matrica&);
Matrica mnozenjeMatrica(Matrica&, Matrica&);
Matrica transponiranaMatrica(Matrica&);
void ispisMatrice(Matrica&);
void brisanjeMatrice(Matrica&);

#endif