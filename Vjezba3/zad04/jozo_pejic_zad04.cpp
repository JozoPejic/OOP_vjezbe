#include "vektor04.hpp"

int main() {

	vector<int> v1 = { 1, 4, 5, 7, 8, 3 };
	int n;

	cout << "Koji element iz vektora zelite ukloniti: ";
	cin >> n;

	uklanjanjeElementa(v1, n);

	for (int i : v1) {
		cout << i << " ";
	}
	cout << endl;
}