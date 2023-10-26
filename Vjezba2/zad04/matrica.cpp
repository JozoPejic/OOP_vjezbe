#include "matrica.hpp"

void unosMatrice(Matrica& matrix) {

	cout << "Unesite dimenzije matrice: ";
	cin >> matrix.redovi >> matrix.stupci;

	matrix.clan = new float*[matrix.redovi];
	for (int i = 0; i < matrix.redovi; i++) {
		matrix.clan[i] = new float[matrix.stupci];

		cout << "Unesite clanove retka " << i + 1 << ": ";
		for (int j = 0; j < matrix.stupci; j++) {
			cin >> matrix.clan[i][j];
		}
	}
}

Matrica generiranjeMatrice(int redovi, int stupci, float a, float b) {
	Matrica matrix;

	matrix.redovi = redovi;
	matrix.stupci = stupci;

	matrix.clan = new float* [matrix.redovi];

	for (int i = 0; i < matrix.redovi; i++) {
		matrix.clan[i] = new float [matrix.stupci];
		for (int j = 0; j < matrix.stupci; j++) {
			float random = a + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (b - a)));
			matrix.clan[i][j] = random;
		}
	}
	return matrix;
}

Matrica zbrajanjeMatrica(Matrica& matrix1, Matrica& matrix2) {
	Matrica rez;
	rez.stupci = matrix1.stupci;
	rez.redovi = matrix1.redovi;

	rez.clan = new float* [rez.redovi];
	for (int i = 0; i < rez.redovi; i++) {
		rez.clan[i] = new float [rez.redovi];
		for (int j = 0; j < rez.stupci; j++) {
			rez.clan[i][j] = matrix1.clan[i][j] + matrix2.clan[i][j];
		}
	}
	return rez;
}

Matrica oduzimanjeMatrica(Matrica& matrix1, Matrica& matrix2) {
	Matrica rez;
	rez.stupci = matrix1.stupci;
	rez.redovi = matrix1.redovi;

	rez.clan = new float* [rez.redovi];
	for (int i = 0; i < rez.redovi; i++) {
		rez.clan[i] = new float[rez.redovi];
		for (int j = 0; j < rez.stupci; j++) {
			rez.clan[i][j] = matrix1.clan[i][j] - matrix2.clan[i][j];
		}
	}
	return rez;
}

Matrica mnozenjeMatrica(Matrica& matrix1, Matrica& matrix2) {

	if (matrix1.stupci != matrix2.redovi) {
		cout << "Nemoguce mnozenje. Neulancane matrice!" << endl;
	}

	Matrica rez;

	rez.redovi = matrix1.redovi;
	rez.stupci = matrix2.stupci;

	rez.clan = new float* [rez.redovi];
	for (int i = 0; i < rez.redovi; i++) {
		rez.clan[i] = new float [rez.stupci];
		for (int j = 0; j < rez.stupci; j++) {
			rez.clan[i][j] = 0.0;
			for (int k = 0; k < matrix1.redovi; k++) {
				rez.clan[i][j] += matrix1.clan[i][k] * matrix2.clan[k][j];
			}
		}
	}
	return rez;
}

Matrica transponiranaMatrica(Matrica& matrix) {

	Matrica transp_matrica;

	transp_matrica.redovi = matrix.redovi;
	transp_matrica.stupci = matrix.stupci;

	transp_matrica.clan = new float* [transp_matrica.redovi];
	for (int i = 0; i < transp_matrica.redovi; i++) {
		transp_matrica.clan[i] = new float [transp_matrica.stupci];
		for (int j = 0; j < transp_matrica.stupci; j++) {
			transp_matrica.clan[i][j] = matrix.clan[j][i];
		}
	}
	return transp_matrica;
}

void ispisMatrice(Matrica& matrix) {
	for (int i = 0; i < matrix.redovi; i++) {
		for (int j = 0; j < matrix.stupci; j++) {
			cout << fixed << setprecision(4) << matrix.clan[i][j] << "\t";
		}
		cout << endl;
	}
}

void brisanjeMatrice(Matrica& matrix) {
	for (int i = 0; i < matrix.redovi; i++) {
		delete[] matrix.clan[i];
	}
	delete[] matrix.clan;
}