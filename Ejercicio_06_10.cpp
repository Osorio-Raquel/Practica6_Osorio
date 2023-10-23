// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023
 
// Número de ejericio: 10

// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de la lectura de dos números enteros, a partir de la relación:

#include <iostream>
#include <wchar.h>

using namespace std;

unsigned int factorial(unsigned int);

int main()
{
    unsigned int n, m;
    setlocale(LC_ALL, "");
    cout << "Ingrese el primer valor: ";
    cin >> n;
    cout << "Ingrese el segundo valor: ";
    cin >> m;
    cout << "El resultado es: " << factorial(n)/(factorial(n-m)*factorial(m));
    return 0;
}

unsigned int factorial(unsigned int n)
{
    if (n == 0) 
        n = 1;
    else
        n = n * factorial(n-1);
    return n;
}