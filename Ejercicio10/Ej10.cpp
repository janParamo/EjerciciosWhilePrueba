/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include<iostream>

using namespace std;

int main()
{
    int matriz1[3][3];
    int i = 0;

    while ( i < 3)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz 1" << endl;
            cout << "Ingresa un numero, fila  "<< i+1 << ", columna "<< j+1 <<":" << endl;
            cin >> matriz1[i][j];
        }
        i++;
        cout << endl;
    }
    cout << endl;

    i = 0;
    while (i < 3)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz normal:"<< endl ;
            cout << matriz1[i][j];
            
        }
        i++;
        cout << endl;
    }
    cout << endl;

    i = 0;
    while (i < 3)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz con filas por columnas cambiadas:"<< endl ;
            cout << matriz1[j][i];
            
        }
        i++;
        cout << endl;
    }
    cout << endl;
   
    return 0;
}