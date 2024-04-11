#include <iostream>
//#include "Cliente.h"
//#include "Estudiante.h"
#include "Trabajador.h"
// Karla Estefany Hernandez Pocasangre Ing Sistemas Guia 9 HP23I04002

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
    tb =  Trabajador(1, "Karla", "Hernandez", 550);
    cout << "\nCodigo\tNombre\tApellido\tTotalPagar\tSueldoMensual\tDescuentoIsss\tDescuentoAFP\tDescuentoIsr\n";
    cout << tb.getCodigo() << "\t";
    cout << tb.getNombre() << "\t";
    cout << tb.getApellido() << "\t";
    cout << tb.getTotalPagar() <<"\t";
    cout <<"\t"<< tb.getSueldoMensual() <<"\t";
    cout <<"\t"<< tb.getDescuentoIsss() <<"\t";
    cout <<"\t"<< tb.getDescuentoAfp() <<"\t";
    cout <<"\t"<< tb.getDescuentoIsr() <<"\n";
    return 0;
}
