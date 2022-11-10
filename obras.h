#ifndef OBRAS_H_INCLUDED
#define OBRAS_H_INCLUDED

struct ObrasE;

typedef struct ObrasE * ObrasP;

ObrasP cargarObras(char n[], char a[], int pre, char cash[]);
ObrasP cargarObrasVacias();
void mostrarObras(ObrasP o);

int getPrecio(ObrasP o);
char* getNombre(ObrasP o);

#endif // OBRAS_H_INCLUDED
