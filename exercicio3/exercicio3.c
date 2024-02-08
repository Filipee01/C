//  Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
// a. O número digitado ao quadrado;
// b. O número digitado ao cubo;
// c. A raiz quadrada do número digitado;
// d. A raiz cúbica do número digitado.

#include <stdio.h>
#include <math.h>

    int main() {

        int number;
        double result;
        

        printf("Digite um numero: \n");
        scanf("%d", &number);
        
        printf("Identificamos um numero positivo e maior que zero\n");
        result = pow(number, 2);
        printf("O numero ao quadrado fica: %.2f\n", result);

        result = pow(number, 3);
        printf("O numero ao cubo fica: %.2f\n", result);

        result = sqrt(number);
        printf("A raiz quadrada fica: %.2f\n", result);

        result = cbrt(number);
        printf("A raiz cubica fica: %.2f", result);
    
        return 0;
    }
