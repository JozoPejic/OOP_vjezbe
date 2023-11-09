#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int jeSamoglasnik(char znak) {

	znak = tolower(znak);
	if (znak == 'a' || znak == 'e' || znak == 'i' || znak == 'o' || znak == 'u') {
		return 1;
	}
	return 0;
}

string prijevod(string& recenica) {

	string prevedenaRecenica;
	string trenutna_rijec;
	int flag = 0;

	for (char znak : recenica) {
		if (isalpha(znak)) {
			trenutna_rijec += znak;
		}
		else {
			if (!trenutna_rijec.empty()) {
				if (jeSamoglasnik(trenutna_rijec[0])) {
					prevedenaRecenica += trenutna_rijec + "hay";
				}
				else {
					prevedenaRecenica += trenutna_rijec.substr(1) + trenutna_rijec[0] + "ay";
				}
				trenutna_rijec.clear();
			}
			prevedenaRecenica += znak;
		}
	}

	if (!trenutna_rijec.empty()) {
		if (jeSamoglasnik(trenutna_rijec[0])) {
			prevedenaRecenica += trenutna_rijec + "hay";
		}
		else {
			prevedenaRecenica += trenutna_rijec.substr(1) + trenutna_rijec[0] + "ay";
		}
	}

	return prevedenaRecenica;
}

int main() {

	vector<string> recenice;

	recenice.push_back("What time is it?");
	recenice.push_back("Ovo je primjer recenice za prijevod na pig latin");

	srand(static_cast<unsigned>(std::time(nullptr)));
	int indeks = rand() % recenice.size();
	string odabranaRecenica = recenice[indeks];

	string prevedenaRecenica = prijevod(odabranaRecenica);
	cout << "Originalna rečenica: " << odabranaRecenica << endl;
	cout << "Prevedena rečenica: " << prevedenaRecenica << endl;
}