#include <stdio.h>

int main() {
    int numero, suma = 0, digito;

    printf("Ingrese un numero:");
    scanf("%d", &numero);


    int numero_original = numero;

    while (numero > 0) {
        digito = numero % 10; 
        suma += digito;      
        numero /= 10;   
    }

    printf("La suma de los d�gitos de %d es: %d\n", numero_original, suma);

    return 0;
}
// este programa realiza la suma de los digitos//
