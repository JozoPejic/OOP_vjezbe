#include "klase.hpp"

int main() {

	int brIgraca;

	cout << "Unesite broj igraca: " << endl;
	cin >> brIgraca;

	if (brIgraca != 2 && brIgraca != 4) {
		cout << "Unijeli ste nedozvoljen broj igraca. (2 ili 4 igraca)" << endl;
	}

	vector<Igrac> igraci;

	for (int i = 0; i < brIgraca; i++) {
		Igrac noviIgrac;
		string ime;
		cout << "Unesite ime " << i + 1 << " igraca" << endl;
		cin >> ime;
		noviIgrac.Ime = ime;
		igraci.push_back(noviIgrac);
	}

	Deck deck;
	deck.generiranjeDecka();
	deck.pomijesajKarte();

	for (auto& igrac : igraci) {
		deck.podijeliKarte(igrac);
	}

	for (auto& igrac : igraci) {
		igrac.akuzanje();
	}

	for (const auto& igrac : igraci) {
		cout << "Igrac " << igrac.Ime << " ima sljedece karte: "<< endl;
		for (const auto& karta : igrac.kombinacijaKarata) {
			cout << karta.broj << " " << karta.zog << endl;
		}
		cout << "Broj bodova: " << igrac.brBodova << endl;
		if (igrac.akuza) {
			cout << "Moze akuzati!" << endl;
		}
		else {
			cout << "Ne moze akuzati!" << endl;
		}
		cout << endl;
	}
}