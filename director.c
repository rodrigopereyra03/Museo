#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "director.h"

struct DirectorE{
    char nombre[30];
    int dni;
};



DirectorP cargarDirector(char n[], int ide){
    DirectorP d = malloc(sizeof(struct DirectorE));

    strcpy(d->nombre,n);
    d->dni=ide;

    return d;
};
void mostrarDirector(DirectorP d){
    printf("\n\n---MOSTRANDO DIRECTOR---\n");
    printf("NOMBRE: %s",d->nombre);
    printf("\nDNI: %d",d->dni);
};
