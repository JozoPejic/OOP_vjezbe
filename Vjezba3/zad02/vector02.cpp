#include "vector02.hpp"


void unos1(vector<int>& v, int n) {
	for (int i = 0; i < n; i++) {
		int var;

		cout << "Unesi broj: " << endl;
		cin >> var;

		v.push_back(var);
	}
}

/*void unos2(vector<int>& v, int m, int n) {
	int var;

	cout << "Unesi broj: " << endl;
	cin >> var;

	while (var > m && var < n) {
		v.push_back(var);
		cin >> var;
	}
}*/

vector<int> noviVector(vector<int> &v1, vector<int> &v2) {
	vector<int> v3;

	for (int i = 0; i < v1.size(); i++) {
		int flag = 0;
		for (int j = 0; j < v2.size(); j++) {
			if (v1[i] == v2[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			v3.push_back(v1[i]);
		}
	}
	return v3;
}

void ispis(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
