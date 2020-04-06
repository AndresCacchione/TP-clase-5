#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


//Estructura base
struct Producto
{
    unsigned int ID;
    char Nombre[31];
    float Precio;
    unsigned int Stock;
    unsigned int StockMin;
};

//Constante para modificar la cantidad de productos que admite el programa
const int cant_prod=10;


//Prototipos de funciones
int index_vacio(struct Producto *);
int index_compara_ID(int ,struct Producto *);
void sory_by_precio(struct Producto *,int);


void sort_by_precio(Producto *prod,int tam)
{
    int pos;
    Producto aux;
    for(int i=0;i<tam-1;i++)
    {
        pos=i;
        for(int j=i+1;j<tam;j++)
        {
            if(prod[j].Precio > prod[pos].Precio)
            {
                pos=j;
            }
        }
        aux=prod[i];
        prod[i]=prod[pos];
        prod[pos]=aux;
    }
}


int index_compara_ID(unsigned int ID,struct Producto *prod)
{
    int existe=-1;
    for(int i=0;i<cant_prod;i++)
    {
        if(prod[i].Precio != 0)
        {
            if(prod[i].ID == ID)
            {
                existe=i;
                break;
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
