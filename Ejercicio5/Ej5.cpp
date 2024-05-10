/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>

using namespace std;

main()
{
    const int numEstudiantes = 8;
    int nota;
    float promedio = 0;
    int aprobados = 0;
    int reprobados = 0;
    int i = 1;

    cout << "Ingrese los puntajes de los estudiantes " << endl;

    while (i <= numEstudiantes)
    {
        cout << "Puntaje del estudiante " << i << ":" << endl;
        cin >> nota;
        i++;

        if (nota >= 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }

        promedio += nota;
    }

    promedio /= numEstudiantes;

    cout << "La cantidad de alumnos aprobados es de:" << aprobados << endl;
    cout << "La cantidad de alumnos reprobados es de:" << reprobados << endl;
    cout << "El promedio general del grupo es de:" << promedio << endl;

    return 0;
}
