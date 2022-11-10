#ifndef MUSEO_H_INCLUDED
#define MUSEO_H_INCLUDED

struct MuseoE;

typedef struct MuseoE * MuseoP;

MuseoP crearMuseo(char n[], char d[]);
void mostrarMuseo(MuseoP m);

void agregarObras(MuseoP m,char nom[], char a[], int pre, char money[]);

void ordeanarObrasPorNombre(MuseoP m);

#endif // MUSEO_H_INCLUDED
