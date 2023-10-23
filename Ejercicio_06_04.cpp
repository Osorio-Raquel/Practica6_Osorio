// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023
 
// Número de ejericio: 4

// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena.

#include <iostream>
#include <string>

using namespace std;

void func(string c, int i) {
    if (i < 0) {
        return;
    }
    cout << c[i];

    func(c, i - 1);
}

int main() {
    string s;
    cout << "Ingrese la cadena: ";
    getline(cin, s);

    int len = s.length();
    
    cout << "Cadena al revea: ";
    func(s, len - 1);
    cout << endl;

    return 0;
}
