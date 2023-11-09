#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool jeInterpunkcija(char znak) {
    return ispunct(znak);
}

void ispraviRecenicu(std::string& recenica) {
    bool prazninaIspred = false;

    for (size_t i = 0; i < recenica.length(); ++i) {
        if (jeInterpunkcija(recenica[i])) {
            if (prazninaIspred) {
                recenica.erase(i - 1, 1);
                --i;
            }

            if (i + 1 < recenica.length() && !std::isspace(recenica[i + 1])) {
                recenica.insert(i + 1, " ");
                ++i;
            }

            prazninaIspred = false;
        }
        else if (std::isspace(recenica[i])) {
            prazninaIspred = true;
        }
    }
}
int main() {

	string str = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno ." ;

	ispraviRecenicu(str);

	cout << str << endl;
}