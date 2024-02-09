// Escreva um programa que leia três valores e mostre qual
// é o maior valor e qual é o menor valor.

#include <stdio.h>

int main() {
 
    int valor1, valor2, valor3;

 
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

   
    int maior = valor1;
    if (valor2 > maior) {
        maior = valor2;
    }
    if (valor3 > maior) {
        maior = valor3;
    }


    int menor = valor1;
    if (valor2 < menor) {
        menor = valor2;
    }
    if (valor3 < menor) {
        menor = valor3;
    }

    printf("O maior valor eh: %d\n", maior);
    printf("O menor valor eh: %d\n", menor);

    return 0;
}
