#include <iostream>
#include <string>
using namespace std;
 
bool buscarPalabra(string cadena, string palabra) {
    int lenCadena = cadena.length();
    int lenPalabra = palabra.length();
 
    for (int i = 0; i <= lenCadena - lenPalabra; i++) {
        int j = 0;
        while (j < lenPalabra && cadena[i + j] == palabra[j]) {
            j++;
        }
        if (j == lenPalabra) {
            return true;
        }  
    }
    return false;
}
 
void imprimirResultado(string palabra, bool encontrada) {
    if (encontrada) {
        cout << "La palabra "<< palabra <<" SI se encuentra en la cadena." << endl;
    } else {
        cout << "La palabra " << palabra << " NO se encuentra en la cadena." << endl;
    }
}
 
int main() {
    string cadena, palabra;
 
    cout << "=== BUSCADOR DE PALABRAS ===" << endl;
    cout << endl;
 
    cout << "Cadena: ";
    getline(cin, cadena);
 
    cout << "Palabra: ";
    getline(cin, palabra);
 
    cout << endl;
 
    bool resultado = buscarPalabra(cadena, palabra);
    imprimirResultado(palabra, resultado);
 
    return 0;
}
