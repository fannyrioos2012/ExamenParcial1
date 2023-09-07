#include <stdio.h>

int main() {
    int numero_inicial;
    int contador = 1;
    
    printf("Ingrese un número inicial: ");
    scanf("%d", &numero_inicial);
    
    printf("Los 10 números siguientes a %d son:\n", numero_inicial);
    
    while (contador <= 10) {
        printf("%d\n", numero_inicial + contador);
        contador++;
    }
    
    return 0;
}

// este programa realiza la impresion de 10 numeros//
