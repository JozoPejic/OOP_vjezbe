#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void obrnutiString(string& str) {
    reverse(str.begin(), str.end());
}

int main() {
    vector<string> vektorStringova;
    int brojStringova;

    cout << "Unesite broj stringova: ";
    cin >> brojStringova;
    cin.ignore();

    for (int i = 0; i < brojStringova; i++) {
        string unos;
        cout << "Unesite string " << i + 1 << ": ";
        getline(cin, unos);
        obrnutiString(unos);
        vektorStringova.push_back(unos);
    }

    sort(vektorStringova.begin(), vektorStringova.end());

    cout << "\nSortirani stringovi prema obrnutim stringovima:\n";
    for (string str : vektorStringova) {
        cout << str << endl;
    }

    return 0;
}
