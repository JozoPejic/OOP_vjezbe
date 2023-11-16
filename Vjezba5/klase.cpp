#include "klase.hpp"

void Deck::generiranjeDecka() {

	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i == 0) karta.zog = "Spade";
			if (i == 1) karta.zog = "Kupe";
			if (i == 2) karta.zog = "Dinare";
			if (i == 3) karta.zog = "Bastone";
			if (j == 1) {
				karta.broj = 1;
				karte.push_back(karta);
			}
			if (j == 1) {
				karta.broj = 1;
				karte.push_back(karta);
			}
			if (j == 2) {
				karta.broj = 2;
				karte.push_back(karta);
			}
			if (j == 3) {
				karta.broj = 3;
				karte.push_back(karta);
			}
			if (j == 4) {
				karta.broj = 4;
				karte.push_back(karta);
			}
			if (j == 5) {
				karta.broj = 5;
				karte.push_back(karta);
			}
			if (j == 6) {
				karta.broj = 6;
				karte.push_back(karta);
			}
			if (j == 7) {
				karta.broj = 7;
				karte.push_back(karta);
			}
			if (j == 8) {
				karta.broj = 11;
				karte.push_back(karta);
			}
			if (j == 9) {
				karta.broj = 12;
				karte.push_back(karta);
			}
			if (j == 10) {
				karta.broj = 13;
				karte.push_back(karta);
			}
		}

	}
}

void Deck::pomijesajKarte() {
	random_shuffle(karte.begin(), karte.end());
}

void Deck::podijeliKarte(Igrac& igrac) {
	for (int i = 0; i < 10; i++) {
		igrac.kombinacijaKarata.push_back(karte.back());
		karte.pop_back();
	}
}

void Igrac::akuzanje() {

	vector<unsigned> spade, kope, dinare, bastone;

	for (const auto& karta : kombinacijaKarata) {

		for (Karta karta : kombinacijaKarata) {
			if (karta.zog == "Spade") {
				if (karta.broj == 1 || karta.broj == 2 || karta.broj == 3) {
					spade.push_back(karta.broj);
				}
			}
			if (karta.zog == "Kupe") {
				if (karta.broj == 1 || karta.broj == 2 || karta.broj == 3) {
					kope.push_back(karta.broj);
				}
			}
			if (karta.zog == "Dinare") {
				if (karta.broj == 1 || karta.broj == 2 || karta.broj == 3) {
					dinare.push_back(karta.broj);
				}
			}
			if (karta.zog == "Bastone") {
				if (karta.broj == 1 || karta.broj == 2 || karta.broj == 3) {
					bastone.push_back(karta.broj);
				}
			}
		}
	}

	vector<unsigned> trilinzi;

	for (const auto& karta : kombinacijaKarata) {
		if (karta.broj == 1 || karta.broj == 2 || karta.broj == 3) {
			trilinzi.push_back(karta.broj);
		}
	}
	if (provjeriNapolitanu(spade) || provjeriNapolitanu(kope) || provjeriNapolitanu(dinare) || provjeriNapolitanu(bastone)) {
		brBodova += 3;
		akuza = true;
		return;
	}

	if (provjeriTriling(trilinzi)) {
		brBodova += 3;
		akuza = true;
		return;
	}
	akuza = false;
}

bool provjeriNapolitanu(vector<unsigned>& zog) {

	return zog.size() == 3;
}

bool provjeriTriling(vector<unsigned>& zog){
	int jedinice = 0;
	int duje = 0;
	int trice = 0;

	for (unsigned broj : zog) {
		if (broj == 1 ) {
			jedinice++;
		}
		if (broj == 2) {
			duje++;
		}
		if (broj == 3) {
			trice++;
		}
	}
	return (jedinice >= 3 || duje >= 3 || trice >= 3);
}