#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10;
    int *p = &x;

    printf("Hola mundo\n\n");

    printf("1) Contenido del puntero: %d\n", *p);
    printf("2) Direccion almacenada por el puntero: %p\n", p);
    printf("3) Direccion de memoria de la variable: %p\n", &x);
    printf("4) Direccion de memoria del puntero: %p\n", &p);
    printf("5) Tamanio de memoria de la variable: %zu bytes\n", sizeof(x));

    return 0;
}


