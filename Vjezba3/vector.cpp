#include "vector.hpp"


void unos1(vector<int> &v, int n) {
	for (int i = 0; i < n; i++) {
		int var;

		cout << "Unesi broj: " << endl;
		cin >> var;

		v.push_back(var);
	}
}

void unos2(vector<int> &v, int m, int n) {
	int var;

	cout << "Unesi broj: " << endl;
	cin >> var;

	while (var > m && var < n) {
		v.push_back(var);
		cin >> var;
	}
}

void ispis(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i) << endl;
	}
}