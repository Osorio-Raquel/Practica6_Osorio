// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023
 
// Número de ejericio: 8

// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es simétrica

#include <iostream>
#include <string>

using namespace std;

bool s(string c, int i, int f) {
    if (i >= f) {
        return true;
    }
    if (c[i] != c[f]) {
        return false;
    }
    return s(c, i + 1, f - 1);
}
int main() {
    string c;
    cout << "Ingrese una cadena: ";
    cin >> c;
    int l = c.length();

    bool si = s(c, 0, l - 1);
    if (si) {
        cout << "Es simetrica" << endl;
    } else {
        cout << "No es simetrica" << endl;
    }

    return 0;
}
