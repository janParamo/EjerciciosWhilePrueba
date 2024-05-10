/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

int main()
{
    float suma = 0;
    float promedio = 0;
    float nota = 0;
    int i = 1;

    while (i <= 10)
    {
        cout << "Dime la nota del estudiante " << i << ":" << endl;
        cin >> nota;
        suma += nota;
        i++;
    }
    promedio = suma / 10;

    cout << "El promedio es:" << promedio << endl;

    return 0;
}
