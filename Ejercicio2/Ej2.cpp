/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>

using namespace std;

int main()
{
    int numImp;
    int i = 99;
    while (i >= 1)
    {
        numImp = i;
        i -= 2;
        cout << numImp << endl;
    }

    return 0;
}
