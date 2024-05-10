/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

#include <iostream>

using namespace std;

int main()
{

    int suma = 0;
    int i = 100;
    int numPares = i;

    while (i <= 200)
    {
        numPares = i;
        suma += numPares;
        i += 2;
    }

    cout << "La suma de los numeros pares del 100 al 200 es de:" << suma << endl;

    return 0;
}
