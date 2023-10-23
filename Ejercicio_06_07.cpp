// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023
 
// Número de ejericio: 7

// Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha comprado una pareja de conejos para criarlos y luego venderlos. 
// Si la pareja de conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes más en ser también productiva, 
// ¿cuántos pares de conejos podrá poner a la venta el granjero al cabo de un año?

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
