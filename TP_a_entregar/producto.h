#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
#include "funciones.h"

struct Producto
{
    unsigned int ID;
    char Nombre[31];
    float Precio;
    unsigned int Stock;
    unsigned int StockMin;
};

const int cant_prod=2;

int menuProducto(int *);
void cargar_producto(struct Producto *, Producto *);


void cargar_producto(struct Producto *prod, Producto *produ)
{
    while(true)
    {
    cout<<"Ingrese el ID del producto: ";
    cin>>(*prod).ID;

    bool existe = compara_ID((*prod).ID,produ);

    if(existe=true)
    {
        cout<<"ID de producto duplicado."<< endl;
        cout<<"¿Intenta nuevamente?"<<endl;
        cout<<"*     1 = SI     *"<<endl;
        cout<<"*     0 = NO     *"<<endl;
        cout<<"\n¿Reintentar?: ";

        bool reintentar;
        cin>>reintentar;

        if(!reintentar)
        {
            return;
        }
    }
    else
    {
        break;
    }
    }

    cin.ignore();
    cout<<"Ingrese el nombre del producto: ";
    cin.getline((*prod).Nombre,30);

    cout<<"Ingrese el precio del producto: ";
    cin>>(*prod).Precio;

    cout<<"Ingrese el stock del producto: ";
    cin>>(*prod).Stock;

    cout<<"Ingrese el stock mínimo del producto: ";
    cin>>(*prod).StockMin;
}


int menuProducto(int *op)
{
    cls();

    cout<<"MENÚ PRODUCTOS                                    "<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"1 - Cargar producto                               "<<endl;
    cout<<"2 - Editar producto x ID                          "<<endl;
    cout<<"3 - Listar producto x ID                          "<<endl;
    cout<<"4 - Listar productos (ordenados por precio)       "<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"0 - Salir del programa                            "<<endl;

    cout<<"\n\nSelecciones una opcion del menú: ";
    cin>>*op;
    cls();
return *op;
}







#endif // PRODUCTO_H_INCLUDED
