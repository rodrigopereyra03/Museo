#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "museo.h"
#include "director.h"
#include "obras.h"
#define TAM 10

struct MuseoE{
    char nombre[30];
    char direccion[20];
    DirectorP director;
    ObrasP obras[TAM];
};



MuseoP crearMuseo(char n[], char d[]){
    MuseoP m = malloc(sizeof(struct MuseoE));

    strcpy(m->nombre,n);
    strcpy(m->direccion,d);

    m->director=cargarDirector("Gabriel, Di Maglio", 11222333);

    for(int i=0; i<TAM; i++){
        m->obras[i]=cargarObrasVacias();
    }

    return m;
};
void mostrarMuseo(MuseoP m){
    printf("\n\n---MOSTRANDO MUSEO---\n");
    printf("NOMBRE: %s",m->nombre);
    printf("\nDIRECCION: %s",m->direccion);

    mostrarDirector(m->director);

    for(int i=0; i<TAM; i++){
        mostrarObras(m->obras[i]);
    }

};

int buscandoPosVacia(MuseoP m){
    int pos=-1;

    for(int i=0; i<TAM; i++){
        if(getPrecio(m->obras[i])==-1){
            pos=i;
            i=TAM+1;
        }
    }

    return pos;
};

void agregarObras(MuseoP m,char nom[], char a[], int pre, char money[]){
    int posVacia=-1;
    posVacia=buscandoPosVacia(m);
    for(int i=0; i<TAM; i++){
        if(posVacia!=-1){
            m->obras[posVacia]=cargarObras(nom,a,pre,money);
        }
    }
};

void ordeanarObrasPorNombre(MuseoP m){
    ObrasP aux;
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM-1; j++){
            if(strcmp(getNombre(m->obras[j]),getNombre(m->obras[j+1]))==1){
                aux=m->obras[j];
                m->obras[j]=m->obras[j+1];
                m->obras[j+1]=aux;
            }
        }
    }

};
