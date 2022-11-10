#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "museo.h"

int main()
{
    MuseoP m1 = crearMuseo("Historico Nacional", "Defensa 1600");
    mostrarMuseo(m1);

    agregarObras(m1, "Noche Estrellada","Van Gogh", 23, "MILLONES");
    agregarObras(m1, "El Beso", "Gustav Klimt",17,"MILLONES");
    agregarObras(m1, "El Grito", "Edvard Munch", 11, "MILLONES");

    mostrarMuseo(m1);

    ordeanarObrasPorNombre(m1);

    mostrarMuseo(m1);
    return 0;
}
