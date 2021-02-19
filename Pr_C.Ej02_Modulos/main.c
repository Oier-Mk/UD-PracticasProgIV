#include <stdio.h>
#include "operaciones.h"

int main() {

    printf("Hola mundo desde C!\n");
    printf("La suma de 2 y 3 es igual a %i\n",suma(2, 3));
    printf("La resta de 3 y 2 es igual a %i\n",resta(3, 2));
    printf("La multiplicación de 2 por 4 es igual a %i\n",multiplica(2, 4));
    printf("La división de 10 / 2 es igual a %i\n",divide(10, 2));

    return 0;

}