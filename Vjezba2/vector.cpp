#include "vector.hpp"

void Vector::vector_new(int velicina_niza) {

	niz = new int[velicina_niza];
	fizicka_velicina = velicina_niza;
	logicka_velicina = 0;
}

void Vector::vector_delete() {
	
	delete[] niz;
}

void Vector::vector_push_back(int n) {

	if (logicka_velicina == fizicka_velicina) {
		fizicka_velicina *= 2;
		int* novi_niz = new int[fizicka_velicina];
		for (int i = 0; i < (fizicka_velicina - 1); i++) {
			novi_niz[i] = niz[i];
		}

		delete[] niz;

		niz = novi_niz;
	}

	niz[logicka_velicina] = n;
	logicka_velicina++;
}

void Vector::vector_pop_back() {

	logicka_velicina -= 1;
}

int& Vector::vector_front() {

	return niz[0];
}

int& Vector::vector_back() {

	return niz[logicka_velicina - 1];
}

int Vector::vector_size() {

	return logicka_velicina;
}

void Vector::printanje_vectora() {

	for (int i = 0; i < logicka_velicina; i++) {
		cout << niz[i] << " ";
	}
	cout << endl;
}