#include <iostream>
#include "Cliente.h"
#include "Estudiante.h"
#include "Trabajador.h"

using namespace std;

int main()
{
    //Ejemplo 1
    //Cliente cli; //instancia de clase
    //cout << cli.getCodigo() << endl;

    //Ejemplo 2
    //Estudiante est(1, "Juan", "Perez", 6, 6, 6);
    //cout<< est.getNombre() << endl;
    //cout<< est.getPromedio() << endl;

    Trabajador tb;
    tb =  Trabajador(1, "Juan", "Perez", 600);
    cout <<  tb.getNombre() << endl;
    cout << tb.getTotalPagar() <<endl;


    return 0;
}


