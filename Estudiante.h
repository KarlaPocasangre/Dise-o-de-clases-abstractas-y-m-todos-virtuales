#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include "Persona.h"
// Karla Estefany Hernandez Pocasangre Ing Sistemas Guia 9 HP23I04002

class Estudiante : public Persona{
    private:
        float nota1;
        float nota2;
        float nota3;
    public:
        Estudiante(int c, string n, string a, float n1, float n2, float n3) :  Persona(c,n,a){
            this->nota1=n1;
            this->nota2=n2;
            this->nota3=n3;
        }
};
#endif // ESTUDIANTE_H_INCLUDED
