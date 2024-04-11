#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include "Persona.h"
class Estudiante : public Persona
{
private:
    float nota1;
    float nota2;
    float nota3;
public:
    Estudiante(int c, string n, string a, float n1, float n2, float n3) : Persona(c, n, a)
    {
        this->nota1 = n1;
        this->nota2 = n2;
        this->nota3 = n3;
    }
    float getNota1(){
        return this->nota1;
    }
    float getNota2(){
        return this->nota2;
    }
    float getNota3(){
        return this->nota3;
    }
    float getPromedio(){
        return (this->nota1+this->nota2+this->nota3)/3;
    }
};


#endif // ESTUDIANTE_H_INCLUDED
