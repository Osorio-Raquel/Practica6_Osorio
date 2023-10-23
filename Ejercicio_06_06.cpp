// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023
 
// Número de ejericio: 6

// Problema planteado: Realizar un algoritmo recursivo para la siguiente función.

#include <iostream>
#include <wchar.h>

using namespace std;

int func(int);

int main()
{
    int n;
    setlocale(LC_ALL, "");
    cout << "Ingrese un valor: ";
    cin >> n;
    cout << "La solucion es: " << func(n);
    return 0;
}

int func(int n)
{
    if (n == 1)
        n = 1;
    else
        n = func(n-1)+(n*n);
    return n;
}
