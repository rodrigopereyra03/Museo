#ifndef DIRECTOR_H_INCLUDED
#define DIRECTOR_H_INCLUDED

struct DirectorE;

typedef struct DirectorE * DirectorP;

DirectorP cargarDirector(char n[], int ide);
void mostrarDirector(DirectorP d);

#endif // DIRECTOR_H_INCLUDED
