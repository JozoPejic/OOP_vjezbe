#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> v1 = { 1, 5, 2, 6, 9, 7, 5 };

	int najveci_element = *max_element(v1.begin(), v1.end());
	cout << "Najveci element je: " << najveci_element << endl;;

	int flag = 0;
	int suma = 0;

	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] == najveci_element) {
			flag = 1;
		}
		else if (flag == 1) {
			suma += v1[i];
		}
	}

	cout << "Suma brojeva iza najveceg elementa je: " << suma << endl;

	sort(v1.begin(), v1.end());

	v1.insert(v1.begin(), 0);

	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;
}