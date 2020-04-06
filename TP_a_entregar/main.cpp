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
                //La opción Cargar Producto debe solicitar la carga de un producto por vez.
                //No debe permitir que se carguen más de 10 productos que es el máximo que
                //el programa tolera. Tampoco debe permitir que el ID producto se repita
                //en la lista de productos.

                ejercicio1(prod);
            }break;
        case 2:
            {
                //La opción Editar Producto debe solicitar el ID de producto y verificar si existe.
                //En caso de existir debe solicitar el resto de los campos de la estructura y
                //modificarla. El ID de un producto no puede modificarse. Si el producto no
                //existe indicarlo con un mensaje.

                ejercicio2(prod);
            }break;
        case 3:
            {
                //La opción Listar Producto por ID debe solicitar el ID de producto y
                //verificar si existe. En caso de existir debe mostrarla por pantalla.
                //Caso contrario indicarlo con un mensaje.

                ejercicio3(prod);
            }break;
        case 4:
            {
                //La opción Listar productos debe mostrar todos los productos cargados
                //hasta el momento ordenados de mayor a menor según su precio.

                ejercicio4(prod);
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
