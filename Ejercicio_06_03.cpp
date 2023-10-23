// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023
 
// Número de ejericio: 3

// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la suma de sus elementos

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int Suma(vector<int> &vector, int i) {
    // Caso base: si el índice es 0, retornamos el primer elemento del vector
    if (i == 0) {
        return vector[0];
    }
    else {
        return vector[i] + Suma(vector, i - 1);
    }
}

int main() {
    int size;
    cout << "Ingrese el tamaño del vector: ";
    cin >> size;
    vector<int> vector(size);
    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < size; i++) {
        vector[i] = rand() % 101;
    }
    int r = Suma(vector, size - 1);
    cout << "Vector:";
    for (int i = 0; i < size; i++) {
        cout << " " << vector[i];
    }
    cout << endl;
    cout << "La suma de los elementos es: " << r << endl;

    return 0;
}


