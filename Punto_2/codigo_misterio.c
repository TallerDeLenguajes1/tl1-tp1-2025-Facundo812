#include <stdio.h>

void invertir_numero(int *p) {
    int auxiliar = *p;
    int invertido = 0;
    while (auxiliar > 0) {
        invertido = (invertido * 10) + (auxiliar % 10);
        auxiliar = auxiliar / 10;
    }
    *p = invertido;
}

void mitad_numero(int *p) {
    *p = *p / 2;
}

void sumar_digitos(int *p) {
    int auxiliar = *p;
    int suma = 0;
    while (auxiliar > 0) {
        suma = suma + (auxiliar % 10);
        auxiliar = auxiliar / 10;
    }
    *p = *p + suma;
}

void procesar_numero(int *valor_referencia) {
    invertir_numero(valor_referencia);
    mitad_numero(valor_referencia);
    sumar_digitos(valor_referencia);
}

int main() {
    int num = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", num);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_numero(&num);
    
    printf("Resultado final del enigma: %d\n", num);
    
    return 0;
}