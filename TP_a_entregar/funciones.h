#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



struct Producto
{
    unsigned int ID;
    char Nombre[31];
    float Precio;
    unsigned int Stock;
    unsigned int StockMin;
};

const int cant_prod=2;


int index_vacio(struct Producto *);
int index_compara_ID(int ,struct Producto *);


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
