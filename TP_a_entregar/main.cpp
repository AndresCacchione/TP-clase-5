#include <iostream>
using namespace std;
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "rlutil.h"
using namespace rlutil;
#include "producto.h"
#include "funciones.h"
#include "ejercicios.h"

int main()
{
    setlocale(LC_ALL,"Spanish");

    struct Producto prod[cant_prod]={0};
    int op;
    do{

        op = menuProducto(&op);
        switch(op)
        {
        case 1:
            {
                ejercicio1(prod);
            }break;
        case 2:
            {
                ejercicio2(prod);
            }break;
        case 3:
            {
                ejercicio3(prod);
            }break;
        case 4:
            {
                //ejercicio4(prod);
            }break;
        case 0:
            {

            }break;
        default:
            {
                cout<<"Opción mal ingresada, intente nuevamente.."<<endl;
            }break;
        }
        anykey();

    }while(op!=0);
    return 0;
}
