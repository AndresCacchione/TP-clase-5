#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "producto.h"

int index_vacio(struct Producto *);
bool compara_ID(int ,struct Producto *);


bool compara_ID(unsigned int ID,struct Producto *prod)
{
    bool existe=false;
    for(int i=0;i<cant_prod;i++)
    {
        if(prod[i].Precio != 0)
        {
            if(prod[i].ID == ID)
            {
                existe=true;
            }
        }
        else
        {
            break;
        }
    }
return existe;
}


int index_vacio(struct Producto *prod)
{
    for(int i=0;i<cant_prod;i++)
    {
        if(prod[i].Precio==0)
        {
            return i;
        }
    }
return -1;
}




#endif // FUNCIONES_H_INCLUDED
