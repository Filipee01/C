// Programa que receba três notas, calcule e mostre a média aritmética das notas

#include <stdio.h>

int main() {

    int nota1, nota2, nota3;
    float result;

    printf("Digite o valor dar tres notas: \n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    result = (nota1 + nota2 + nota3) / 3;

    printf("A media das tres nota foi de: %.2f", result);

    return 0;
}