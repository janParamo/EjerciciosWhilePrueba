/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>

using namespace std;

int main()
{
    int n, suma = 0;
    int i = 1;

    cout << "Dime hasta donde quieres sumar los numeros naturales empezando por 1:" << endl;
    cin >> n;

    while (i <= n)
    {
        suma += i;
        i++;
    }

    cout << "La suma de los numeros naturales empezando desde 1 es de: " << suma << endl;

    return 0;
}
