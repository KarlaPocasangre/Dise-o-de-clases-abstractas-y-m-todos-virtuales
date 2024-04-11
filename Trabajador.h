#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include "Persona.h"
// Karla Estefany Hernandez Pocasangre Ing Sistemas Guia 9 HP23I04002

class Trabajador : public Persona
{
private:
    float sueldoMensual;
    float descuentoIsss;
    float descuentoAfp;
    float descuentoIsr;
    float totalPagar;
    void calcular()
    {
        ///Aplicar descuento Iss
        (this-> sueldoMensual<=1000) ? this ->descuentoIsss=30 : this->descuentoIsss*0.03;
        ///Aplicar decuento AFP
        (this->sueldoMensual <= 7500) ? this->descuentoAfp = this->sueldoMensual * 0.0725 : this->descuentoAfp = 543.75;
        ///Aplicar decuento AFP
        float ri= this-> sueldoMensual - this->descuentoIsss - this->descuentoAfp;
        if(ri>0 && ri<=472)
        {
            this->descuentoIsr=0;
        }
        else
        {
            if(ri>472 && ri<=895.24)
            {
                this->descuentoIsr=(ri-472)*0.1+17.67;
            }
            else
            {
                if(ri>895.24 && ri<=2038.1)
                {
                    this->descuentoIsr=(ri-895.24)*0.2+60;
                }
                else
                {
                    this->descuentoIsr= (ri-2038.1)*0.3+288.57;
                }
            }
        }
        this->totalPagar=this->sueldoMensual-(this->descuentoIsss+this->descuentoAfp+this->descuentoIsr);
    }
public:
    Trabajador()
    {
        this->sueldoMensual=0;
        this->descuentoIsss=0;
        this->descuentoAfp=0;
        this->descuentoIsr=0;
        this->totalPagar=0;
    }
    Trabajador(int c, string n,string a, float sm):  Persona(c,n,a)
    {
        this->sueldoMensual=sm;
        this->calcular();
    }
    float getSueldoMensual()
    {
        return this->sueldoMensual;
    }
    float getDescuentoIsss()
    {
        return this->descuentoIsss;
    }
    float getDescuentoAfp()
    {
        return this->descuentoAfp;
    }
    float getDescuentoIsr()
    {
        return this->descuentoIsr;
    }
    float getTotalPagar()
    {
        return this->totalPagar;
    }
};
#endif // TRABAJADOR_H_INCLUDED
