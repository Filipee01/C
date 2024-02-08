// Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = πR2

#include <stdio.h>
#define PI 3.14
#include <math.h>

    int main() {
        
        float area, raio;

        printf("Digite o valor do raio: \n");
        scanf("%f", &raio);

        area = PI * pow(raio, 2);
        
        printf("O valor da area e: %f\n", area);

        return 0;
    }