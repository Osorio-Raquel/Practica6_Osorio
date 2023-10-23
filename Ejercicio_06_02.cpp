// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023
 
// Número de ejericio: 2

// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos.

#include <iostream>
using namespace std; 

int sumaDigitos(int x) {
    if (x == 0) {
        return 0;
    } else {
        return x % 10 + sumaDigitos(x / 10);
    }
}

int Secuencia(int x) {
    if (x == 1) {
        return 1;
    } else {
        return Secuencia(x - 1) + sumaDigitos(Secuencia(x -1));
    }
}

int main() {
    int n;
    cout << "Ingrese el número de términos a generar: ";
    cin >> n;
    for(int i=1; i< n+1; i++){
        cout << Secuencia(i)<< ' ';
    }
    return 0;
}


