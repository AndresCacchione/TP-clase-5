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
                //La opci�n Cargar Producto debe solicitar la carga de un producto por vez.
                //No debe permitir que se carguen m�s de 10 productos que es el m�ximo que
                //el programa tolera. Tampoco debe permitir que el ID producto se repita
                //en la lista de productos.

                ejercicio1(prod);
            }break;
        case 2:
            {
                //La opci�n Editar Producto debe solicitar el ID de producto y verificar si existe.
                //En caso de existir debe solicitar el resto de los campos de la estructura y
                //modificarla. El ID de un producto no puede modificarse. Si el producto no
                //existe indicarlo con un mensaje.

                ejercicio2(prod);
            }break;
        case 3:
            {
                //La opci�n Listar Producto por ID debe solicitar el ID de producto y
                //verificar si existe. En caso de existir debe mostrarla por pantalla.
                //Caso contrario indicarlo con un mensaje.

                ejercicio3(prod);
            }break;
        case 4:
            {
                //La opci�n Listar productos debe mostrar todos los productos cargados
                //hasta el momento ordenados de mayor a menor seg�n su precio.

                ejercicio4(prod);
            }break;
        case 0:
            {

            }break;
        default:
            {
                cout<<"Opci�n mal ingresada, intente nuevamente.."<<endl;
            }break;
        }
        anykey();

    }while(op!=0);
    return 0;
}
