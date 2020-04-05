#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
#include "funciones.h"

int menuProducto(int *);
void cargar_producto(struct Producto *, Producto *);
void editar_producto(int, struct Producto *);
void listar_producto(struct Producto);


void listar_producto(struct Producto prod)
{
    cout<<"El nombre del producto es: " << prod.Nombre<< endl;
    cout<<"El precio del producto es: " << prod.Precio<< endl;
    cout<<"El stock del producto es: " << prod.Stock<< endl;
    cout<<"El stock mínimo del producto es: " << prod.StockMin<< endl;
}



void editar_producto(int index, Producto *prod)
{
    cin.ignore();
    cout<<"Ingrese el nombre del producto: ";
    cin.getline(prod[index].Nombre,30);

    cout<<"Ingrese el precio del producto: ";
    cin>>prod[index].Precio;

    cout<<"Ingrese el stock del producto: ";
    cin>>prod[index].Stock;

    cout<<"Ingrese el stock mínimo del producto: ";
    cin>>prod[index].StockMin;
}


void cargar_producto(struct Producto *prod, Producto *produ)
{
    while(true)
    {
    cout<<"Ingrese el ID del producto: ";
    cin>>(*prod).ID;

    int existe = index_compara_ID((*prod).ID,produ);

    if(existe!=-1)
    {
        cout<<"\nID de producto duplicado."<< endl;
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
        cout<<endl;
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
