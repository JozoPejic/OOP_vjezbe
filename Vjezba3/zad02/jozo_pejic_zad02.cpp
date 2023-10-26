#include "vector02.hpp"

int main() {

	vector<int> v1, v2, v3;
	int n;
	int a, b;

	cout << "Unesite broj elemenata prvog vektora: " << endl;
	cin >> n;
	cout << "Unos elemenata prvog vektora: " << endl;
	unos1(v1, n);

	cout << endl;

	ispis(v1);

	cout << endl;

	cout << "Unesite broj elemenata drugog vektora: " << endl;
	cin >> a;
	unos1(v2, a);

	cout << endl;

	ispis(v2);

	cout << endl;
	
	v3 = noviVector(v1, v2);

	ispis(v3);

	cout << endl;
}