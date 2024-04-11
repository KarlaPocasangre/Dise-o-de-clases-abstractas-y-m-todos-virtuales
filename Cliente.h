#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "Persona.h"
// Karla Estefany Hernandez Pocasangre Ing Sistemas Guia 9 HP23I04002

class Cliente : public Persona{
    private:
        int idMembresia;
    public:
        Cliente(){
            this->idMembresia=0;
        }
};
#endif // CLIENTE_H_INCLUDED
