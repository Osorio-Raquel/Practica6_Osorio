// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 19/10/2023

// Fecha modificación: 19/10/2023
 
// Número de ejericio: 1

// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos números enteros aplicando el algoritmo de Euclides.

#include <iostream>
using namespace std;

int Euclides(int, int);
int main()
{
    int A,B;
    cout << "Ingrese los numeros: "<<endl;
    cin >> A >> B;
    cout << Euclides(A,B)<< endl;
    return 0;
}

int Euclides(int A, int B){
    if (A % B == 0){
        return B; 
    }
    else{
        return Euclides (B, A % B); // recursivo
    }

}