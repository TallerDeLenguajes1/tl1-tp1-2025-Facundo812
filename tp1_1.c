#include <stdio.h>

void main(){
    printf("Hola mundo.");

    int num = 10; //entero

    int *p; //puntero a entero
    p = &num;

    printf("\nEl contenido del puntero: %d",*p);
    printf("\nLa dirección de memoria almacenada por el puntero: %p",p);
    printf("\nLa dirección de memoria de la variable.: %p",&num);
    printf("\nLa dirección de memoria del puntero: %p",&p);
    printf("\nEl tamaño de memoria utilizado por esa variable usando la función: %zu",sizeof(num));
    
}