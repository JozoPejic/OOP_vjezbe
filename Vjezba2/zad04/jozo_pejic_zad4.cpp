#include "matrica.hpp"

int main() {

	Matrica m1, m2;
	float a = 1, b = 5;
	int redovi = 3, stupci = 3;

	cout << "Unos prve matrice. " << endl;
	unosMatrice(m1);

	cout << "Unos druge matrice. " << endl;
	unosMatrice(m2);

	cout << "Ispis prve matrice: " << endl;
	ispisMatrice(m1);
	cout << endl;

	cout << "Ispis druge matrice: " << endl;
	ispisMatrice(m2);
	cout << endl;

	cout << "Ispis generirane matrice: " << endl;
	Matrica m3 = generiranjeMatrice(redovi, stupci, a, b);
	ispisMatrice(m3);

	cout << endl;

	cout << "Zbroj matrica m1 i m2: " << endl;
	Matrica rez2 = zbrajanjeMatrica(m1, m2);
	ispisMatrice(rez2);
	cout << endl;

	cout << "Razlika matrica m1 i m2: " << endl;
	Matrica rez3 = oduzimanjeMatrica(m1, m2);
	ispisMatrice(rez3);
	cout << endl;

	cout << "Ummnozak matrica m1 i m2: " << endl;
	Matrica rez4 = mnozenjeMatrica(m1, m2);
	ispisMatrice(rez4);
	cout << endl;

	cout << "Transponirana matrica matrice m1 je: " << endl;
	Matrica rez5 = transponiranaMatrica(m1);
	ispisMatrice(rez5);
	cout << endl;

	brisanjeMatrice(m1);
	brisanjeMatrice(m2);
	brisanjeMatrice(m3);
	brisanjeMatrice(rez2);
	brisanjeMatrice(rez3);
	brisanjeMatrice(rez4);
	brisanjeMatrice(rez5);

}