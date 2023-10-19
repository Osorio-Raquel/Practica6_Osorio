// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023
 
// Número de ejericio: 2

// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos.

#include <iostream>

using namespace std; 

int sumaDigitos(int numero) {
    if (numero == 0) {
        return 0;
    } else {
        return numero + numero % 10 + sumaDigitos(numero / 10);
    }
}

int Secuencia(int numero) {
    if (numero == 1) {
        return 1;
    } else {
        return sumaDigitos(Secuencia(numero-1));
    }
}

int main() {
    int n;
    cout << "Ingrese el número de términos a generar: ";
    cin >> n;
    cout << Secuencia(n)<< ' ';
    return 0;
}

