#include <stdio.h>
//funciones
int cuadrado(int numero);
void cuadrado_ref(int *numero);
void mostrar(int *variable);
void Invertir(int *a, int *b);
void orden(int *a, int *b);  


void main(){
    int x,y;
    printf("Ingrese un valor 1: ");
    scanf("%d",&x);
        mostrar(&x);

    printf("\nIngrese un valor 2: ");
    scanf("%d",&y);
        mostrar(&y);

        printf("\n------------------------------------");
    x = cuadrado(x);
    printf("\nvalor1 al cuadrado(funcion int) es: %d",x);
    cuadrado_ref(&y);
    printf("\nvalor2 al cuadrado(funcion void) es: %d",y);
        printf("\n------------------------------------");
    Invertir(&x,&y);
    printf("\nSe invierten los valores... resultado... valor1: %d, valor2: %d",x,y);
        printf("\n------------------------------------");
    orden(&x,&y);
    printf("\nEl valor menor es %d, el valor mayor es %d",x,y);
}


//funciones
int cuadrado(int numero){
    return numero * numero;
}

void cuadrado_ref(int *numero){
    *numero = *numero * *numero;
}

void mostrar(int *variable){
    printf("direccion de memoria de la variable: %p, contenido: %d",variable,*variable);
}

void Invertir(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b){
    if(*a > *b){
        Invertir(a,b);
    }
}  