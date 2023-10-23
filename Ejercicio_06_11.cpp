// Materia: Programación I, Paralelo 2

// Autor: Raquel Osorio Mamani

// Fecha creación: 22/10/2023

// Fecha modificación: 22/10/2023
 
// Número de ejericio: 11

// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
// de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
// • Empiece con cualquier entero positivo.
// • Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
// • Obtenga enteros sucesivamente repitiendo el proceso.
// Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo, cuando el entero inicial es 26, la secuencia será:
// 26 13 40 20 10 5 16 8 4 2 1

#include <iostream>

using namespace std;

void conj(int n) {
    if (n <= 1) {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    if (n % 2 == 0) {
        conj(n / 2);
    } else {
        conj(3 * n + 1);
    }
}

int main() {
    int N;
    cout << "Ingrese un entero positivo mayor que 1: ";
    cin >> N;
    if (N > 1) {
        conj(N);
        cout << endl;
    } else {
        cout << "El número debe ser mayor que 1." << endl;
    }

    return 0;
}
