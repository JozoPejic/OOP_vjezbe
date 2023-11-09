#include<iostream>
#include<string>

using namespace std;

int brPojavljivanja(string& str1, string& podstring) {

	size_t pos = 0;
	int brojac = 0;

	while ((pos = str1.find(podstring, pos)) != string::npos) {
		brojac++;
		pos += podstring.length();
	}
	return brojac;
}
int main() {

	string string1 = "Primjer stringa za trazenje podstringa";
	string podstring = "string";

	int brojPojavljivanja = brPojavljivanja(string1, podstring);

	cout << "Broj pojavljivanja podstringa: " << brojPojavljivanja << endl;
}