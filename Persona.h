#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <string.h>
// Karla Estefany Hernandez Pocasangre Ing Sistemas Guia 9 HP23I04002
using namespace std;

class Persona{
    private:
        int codigo;
        string nombre;
        string apellido;
    public:
        Persona(){
            this->codigo=0;
        }
        Persona(int c, string n, string a){
            this->codigo=c;
            this->nombre=n;
            this->apellido=a;
        }
        int getCodigo(){
            return this->codigo;
        }
        string getNombre(){
            return this->nombre;
        }
        string getApellido(){
            return this->apellido;
        }
};


#endif // PERSONA_H_INCLUDED
