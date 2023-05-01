//
// Created by Administrador on 1/5/2023.
//

#include "Remedios.h"
#include<stdio.h>
#define n 30
void cargar(Remedios *remedio){
for(int i=0; i<n; i++){
    printf("Ingrese el nombre del producto %d\n", i+1);
    scanf("%s", &remedio[i].nombre);
    printf("Ingrese el codigo del producto %d\n", i+1);
    scanf("%d", &remedio[i].codigo);
    printf("Ingrese el precio del producto %d\n", i+1);
    scanf("%f", &remedio[i].precio);
}
}
void pedir(Remedios *remedio, int cantprod, int cantsoli[cantprod], char nom[cantprod]){
    printf("Ingrese cantidad de remedios a solicitar:\n");
    scanf("%d", &cantprod);
    do{
        for(int i=0; i<cantprod; i++){
            printf("Ingrese el nombre del medicamento a solicitar\n");
            gets(nom[i]);
            printf("Ingrese cantidad del medicamento %s a solicitar: \n", nom[i]);
            scanf("%d", cantsoli[i]);
        }
    }while()
}

void calcular(Remedios *remedio, int cantprod, int cantsoli[cantprod], char nom[cantprod], float preciomed[cantprod], int v[cantprod]){
    for(int i=0; i<cantprod; i++){
        for(int j=0; j<30; j++){
            if(remedio[j].nombre == nom[i]){
            preciomed[i]=remedio[j].precio*cantsoli[i];
            v[i]=j;
            }
        }
    }
}
void mostrar(int Remedios *remedio, int cantprod, int v[cantprod],  ){
    for(int i=0; i<cantprod; i++){
    printf("Medicamentos pedidos:\n");
    printf("Medicamento: %s\nCodigo: %d\nPrecio individual: %f\nCantidad solicitada: %d\nCantidad total a abonar: %f\n", remedio[v[i]].nombre, remedio[v[i]].codigo, remedio[v[i]].precio, cantsoli[i], preciomed[i]);

}
}