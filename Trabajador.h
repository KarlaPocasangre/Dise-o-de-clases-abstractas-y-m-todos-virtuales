#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include "Persona.h"
class Trabajador : public Persona {
private:
    float sueldoMensual;
    float descuentoIsss;
    float descuentoAfp;
    float descuentoIsr;
    float totalPagar;
    void calcular(){
        //Debe realizarse los descuentos a partir del sueldo mensual
    this->descuentoIsss = 0;
    this->descuentoAfp = 0;
    this->descuentoIsr = 0;
    this->totalPagar = 0;
    }
public:
    Trabajador(){
        this->sueldoMensual = 0;
        this->descuentoAfp = 0;
        this->descuentoIsss = 0;
        this->descuentoIsr = 0;
        this->totalPagar = 0;
    }
    Trabajador(int c, string n, string a, float sm) : Persona(c, n, a){
        this->sueldoMensual = sm;
        this->calcular();
    }
    float getSueldoMensual(){
        return this->sueldoMensual;
    }
    float getDescuentoIsss(){
        return this->descuentoIsss;
    }
    float getDescuentoAfp(){
        return this->descuentoAfp;
    }
    float getDescuentoIsr(){
        return this->descuentoIsr;
    }
    float getTotalPagar(){
        return this->totalPagar;
    }

};


#endif // TRABAJADOR_H_INCLUDED
