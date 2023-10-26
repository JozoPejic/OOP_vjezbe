#include "vektor04.hpp"

void uklanjanjeElementa(vector<int>& v, int m) {

	v.erase(remove(v.begin(), v.end(), m), v.end());
}