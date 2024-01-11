#include<iostream>
#include<vector>

using namespace std;

template <typename T> class Skup {
public:
	vector<T> skup;

	void umetni(T element) {
		skup.push_back(element);
	}

	void ukloni(T element) {
		skup.erase(std::remove(skup.begin(), skup.end(), element), skup.end());
	}

	bool provjeri(T element) {
		for (int i = 0; i < skup.size(); i++) {
			if (skup.at(i) == element) {
				return true;
				break;
			}
		}
		return false;
	}
};

int main() {

	Skup<int> a;

	a.umetni(2);
	a.umetni(4);
	a.umetni(6);

	a.ukloni(2);

	if (a.provjeri(4)) {
		cout << "3 postoji u skupu" << endl;
	}
	else {
		cout << "Ne postoji" << endl;
	}
}