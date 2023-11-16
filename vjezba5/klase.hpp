#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<ctime>

using namespace std;

class Karta {
public:

	unsigned broj;
	string zog = "";
};

class Igrac {
public:

	string Ime;
	vector<Karta> kombinacijaKarata;
	unsigned brBodova = 0;
	bool akuza;
	void akuzanje();
};

class Deck {
public:

	vector<Karta> karte;
	Karta karta;
	void generiranjeDecka();
	void pomijesajKarte();
	void podijeliKarte(Igrac&);
};

bool provjeriNapolitanu(vector<unsigned>&);
bool provjeriTriling(vector<unsigned>&);