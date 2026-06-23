
#include <iostream>
#include <string>
using namespace std;

string soloLetras(string cadena) {
	string resultado = "";
	for (int i = 0; i < cadena.length(); i++) {
		if (cadena[i] != ' ') {
			if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
				resultado += cadena[i] + 32;
			} else {
				resultado += cadena[i];
			}
		}
	}
	return resultado;
}

bool esAnagrama(string cadena1, string cadena2) {
	cadena1 = soloLetras(cadena1);
	cadena2 = soloLetras(cadena2);

	if (cadena1.length() != cadena2.length()) {
		return false;
	}

	int conteo[26] = {0};

	for (int i = 0; i < cadena1.length(); i++) {
		conteo[cadena1[i] - 'a']++;
		conteo[cadena2[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++) {
		if (conteo[i] != 0) {
			return false;
		}
	}

	return true;
}

int main() {
	string cadena1, cadena2;

	cout << "=== DETECTOR DE ANAGRAMAS ===" << endl;
	cout << endl;

	cout << "Ingresa la primera cadena: ";
	getline(cin, cadena1);

	cout << "Ingresa la segunda cadena: ";
	getline(cin, cadena2);

	cout << endl;

	if (esAnagrama(cadena1, cadena2)) {
		cout << "\"" << cadena1 << "\" y \"" << cadena2 << "\" SI son anagramas." << endl;
	} else {
		cout << "\"" << cadena1 << "\" y \"" << cadena2 << "\" NO son anagramas." << endl;
	}

	return 0;
}