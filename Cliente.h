#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "Persona.h"

class Cliente : public Persona
{
private:
    int idMembresia;
    int codigo;
public:
    Cliente()
    {
        this->codigo = 0;
        this->idMembresia = 0;
    }
    int getIdMembresia()
    {
        return this->idMembresia;
    }
};



#endif // CLIENTE_H_INCLUDED
