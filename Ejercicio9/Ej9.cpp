/*. Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

using namespace std;

int main()
{
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];
    int i, j;

    // Ingreso de datos de la matriz 1
    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Matriz 1" << endl;
            cout << "Ingresa un numero, fila  " << i + 1 << ", columna " << j + 1 << ":" << endl;
            cin >> matriz1[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // Ingreso de datos de la matriz 2
    for (int i = 0; i < 3; i++)
    {
        j = 0;
        while (j < 3)
        {
            cout << "Matriz 2" << endl;
            cout << "Ingresa un numero, fila  " << i + 1 << ", columna " << j + 1 << ":" << endl;
            cin >> matriz2[i][j];
            j++;
        }
        cout << endl;
    }
    cout << endl;

    // Multiplacion de la matriz
    i = 0;
    while (i < 3)
    {
        for (int j = 0; j < 3; j++)
        {
            resultado[i][j] = matriz1[i][0] * matriz2[0][j] + matriz1[i][1] * matriz2[1][j] + matriz1[1][2] * matriz2[2][j];
        }
        i++;
        cout << endl;
    }
    cout << endl;

    // Se imprime la  matriz 1
    for (int i = 0; i < 3; i++)
    {
        j = 0;
        while (j < 3)
        {
            cout << matriz1[i][j] << " ";
            j++;
        }
        cout << endl;
    }
    cout << endl;

    // Se imprime la matriz 2
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            cout << matriz2[i][j] << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    cout << endl;

    // Se imprime la multiplicacion de la matriz
    for (int i = 0; i < 3; i++)
    {
        j = 0;
        while (j < 3)
        {
            cout << resultado[i][j] << " ";
            j++;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
