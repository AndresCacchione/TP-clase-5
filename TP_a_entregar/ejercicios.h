#ifndef EJERCICIOS_H_INCLUDED
#define EJERCICIOS_H_INCLUDED
#include "producto.h"

void ejercicio1(Producto *);
void ejercicio2(Producto *);
void ejercicio3(Producto *);
void ejercicio4(Producto *);

void ejercicio1(Producto *prod)
{
    int ind = index_vacio(prod);
    if(ind!=-1)
    {
        cargar_producto(&prod[ind], prod);
    }
    else
    {
        cout<<"Sin espacio para cargar producto nuevo. Elimine o modifique uno existente."<<endl;
    };
}


void ejercicio2()
{




}


void ejercicio3()
{




}


void ejercicio4()
{




}

#endif // EJERCICIOS_H_INCLUDED
