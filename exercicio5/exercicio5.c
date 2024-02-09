// Faça um programa para ler um número inteiro (considereque serão lidos apenas valores positivos e inteiros) 
// e escrever se o número é par ou é ímpar.

#include <stdio.h>

    int main () {

        int number;

        printf("Digite um numero: \n");
        scanf("%d", &number);

        if(number >= 0) {    
            if (number % 2 == 0) {
                printf("O numero eh %d e eh par", number);
            }else {
                printf("O numero eh %d e impar", number);
            }
        } else {
            printf("Por favor, insira um numero inteiro e positivo");
        }

        return 0;
    }