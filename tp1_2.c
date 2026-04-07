#include <stdio.h>
#include <stdlib.h>

int cuadrado(int x){
    return x*x;
}

void cuadradoPuntero(int *p){
    *p = (*p) * (*p);
}

void invertir(int *a, int *b){
    int aux = *a;
    *a=*b;
    *b=aux;
}

void orden(int *a, int *b){
    
    if(*a<*b){
        invertir(a,b);
    }

}

int main(){
    int x;
    int y;
    printf("Ingrese un valor de x: ");
    scanf("%d", &x);
    printf("Ingrese un valor de y: ");
    scanf("%d", &y);

    orden(&x,&y);
    y = cuadrado(y); 
    cuadradoPuntero(&x);
    printf("El resultado de x es: %d\n", x);
    printf("El resultado de y es: %d", y);
    return 0;
}


