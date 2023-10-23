// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023
 
// Número de ejericio: 5

// Problema planteado:  Realizar un algoritmo recursivo para comparar si dos vectores son iguales.

#include <iostream>
#include <vector>

using namespace std;

bool func(vector<int>& v1, vector<int>& v2, int i) {
    if (i < 0) {
        return true;
    }
    if (v1[i] != v2[i]) {
        return false;
    }
    return func(v1, v2, i - 1);
}

int main() {
    int t;
    cout << "Ingrese el tamaño: ";
    cin >> t;
    vector<int> v1(t);
    vector<int> v2(t);
    cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < t; i++) {
        cin >> v1[i];
    }
    cout << "Ingrese los elementos del segundo vector: ";
    for (int i = 0; i < t; i++) {
        cin >> v2[i];
    }
    bool same = func(v1, v2, t - 1);
    if (same) {
        cout << "Los vectores son iguales!!" << endl;
    } else {
        cout << "Los vectores no son iguales :c" << endl;
    }
    return 0;
}