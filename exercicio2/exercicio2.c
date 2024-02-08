// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a médiaponderada das notas.

#include <stdio.h>

    int main() {

        int nota1, nota2, nota3, p1, p2 , p3;
        float result;


        printf("Digite a primeira nota: \n");
        scanf("%d", &nota1);

        printf("Digite o seu peso: \n");
        scanf("%d", &p1);

        printf("Digite a segunda nota: \n");
        scanf("%d", &nota2);

        
        printf("Digite o seu peso: \n");
        scanf("%d", &p2);

        printf("Digite a terceira nota: \n");
        scanf("%d", &nota3);

        
        printf("Digite o seu peso: \n");
        scanf("%d", &p3);


        result = (nota1 * p1 + nota2 * p2 + nota3 * p3) / (p1 + p2 + p3);
        
        printf("o resultado da media ponderada eh: %.2f", result);



        return 0;
    }