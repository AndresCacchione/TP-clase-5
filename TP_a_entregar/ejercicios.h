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
        cout<<"\nSin espacio para cargar producto nuevo. Elimine o modifique uno existente."<<endl;
    };
}


void ejercicio2(Producto *prod)
{
    unsigned int ID;
    cout<<"Ingrese el ID de producto a editar: ";
    cin>>ID;
    int existe = index_compara_ID(ID,prod);

    if(existe==-1)
    {
        cout<<"El producto no existe."<<endl;
    }
    else
    {
        editar_producto(existe, prod);
    }
}


void ejercicio3(Producto *prod)
{
    unsigned int ID;
    cout<<"Ingrese el ID de producto a listar: ";
    cin>>ID;
    int existe = index_compara_ID(ID,prod);

    if(existe==-1)
    {
        cout<<"El producto no existe."<<endl;
    }
    else
    {
        listar_producto(prod[existe]);
    }
}


void ejercicio4()
{




}

#endif // EJERCICIOS_H_INCLUDED
