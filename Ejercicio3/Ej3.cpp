/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int i = 1;

    while ( i <= 100 )
    {
        suma += i * i;
        i++;
    }

    cout << "La suma de los cuadrados de los num entre 1 y 100 es de:" << suma << endl;
    
    return 0;
}
