/*Un laboratorio produce 30 remedios que tiene codificados de 1 a 30 de los que se
conoce el código, nombre y precio. El cliente encarga varios medicamentos. Se
ingresa el nombre y la cantidad solicitada en el orden en que son requeridos por el
cliente.
Imprimir la factura ordenada por número de código con la siguiente información:
código, cantidad, nombre, precio y el total a pagar.*/

#include <stdio.h>
#include "Remedios.h"

int main(){
    Remedios remedio[30];
    int cantprod, cantsoli[cantprod], ;
    char nom[cantprod];
    printf("Carga de datos\n");
    cargar(remedio);
    pedir(remedio, cantprod, cantsoli, nom);
    calcular(remedio);
    mostrar(remedio);

    return 0;
}
