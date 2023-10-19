// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023
 
// Número de ejericio: 3

// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la suma de sus elementos

#include <iostream>
#include <vector>

using namespace std;

int sumaElementos(vector<int>& vec) {
    int n = vec.size();
    if (n == 0) {
        return 0;
    }
    return sumaElementos(vec) + vec[n - 1];
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;
    
    vector<int> numeros(n);
    
    cout << "Ingrese " << n << " numeros:" << endl; //llenar el vector
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int resultado = sumaElementos(numeros);

    cout << "La suma de los elementos del vector es: " << resultado << endl;

    return 0;
}
