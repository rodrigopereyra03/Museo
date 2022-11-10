#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "obras.h"


struct ObrasE{
    char nombre[40];
    char autor[30];
    int precio;
    char plata[20];

};



ObrasP cargarObras(char n[], char a[], int pre, char cash[]){
    ObrasP o = malloc(sizeof(struct ObrasE));

    strcpy(o->nombre,n);
    strcpy(o->autor,a);
    o->precio=pre;
    strcpy(o->plata,cash);

    return o;
};
ObrasP cargarObrasVacias(){
    ObrasP o = malloc(sizeof(struct ObrasE));

    strcpy(o->nombre,"VACIO");
    strcpy(o->autor,"VACIO");
    o->precio=-1;
    strcpy(o->plata,"MILLONES");

    return o;
};
void mostrarObras(ObrasP o){
    printf("\n\n--MOSTRANDO OBRAS--\n");
    printf("NOMBRE: %s",o->nombre);
    printf("\nAUTOR: %s",o->autor);
    printf("\nPRECIO: %d %s",o->precio,o->plata);


};

int getPrecio(ObrasP o){
    return o->precio;
};
char* getNombre(ObrasP o){
    return o->nombre;
};
