/*1. Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
do meio dentre os três números*/

#include <stdio.h>
int main()
{   
    // Variáveis declaradas 
    float a, b, c;
     
    // Solicita valores para a, b e c
    printf("insira um valor para a: ");
    scanf("%f", &a);
    printf("insira um valor para b: ");
    scanf("%f", &b);
    printf("insira um valor para c: ");
    scanf("%f", &c);

    // Verifica se 'a' é o maior número
    if (a > b && a > c) {
        printf("a eh o maior numero.\n");
        // Verifica a relação entre 'b' e 'c' para determinar o elemento do meio e o menor número
        if (b > c) {
            printf("b eh o numero do meio.\n");
            printf("c eh o menor numero.");
        } else if (b == c) {
            printf("b e c sao iguais.");
        } else {
            printf("c eh o numero do meio.\n");
            printf("b eh o menor numero.");
        }
    }
    // Caso 'a' não seja o maior, verifica se é o elemento do meio, com 'b' sendo o menor
    else if (a > b && a < c) {
        printf("a eh o numero do meio.\n");
        printf("b eh o menor numero.\n");
        printf("c eh o maior numero.");
    }
    // Caso 'a' não seja o maior nem o menor, verifica se é o elemento do meio, com 'b' sendo o maior
    else if (a < b && a > c) {
        printf("a eh o numero do meio.\n");
        printf("b eh o maior numero.\n");
        printf("c eh o menor numero.");
    }
    // Caso todos os números sejam iguais
    else if (a == b && a == c) {
        printf("todos sao iguais");
    }
    // Caso 'a' e 'b' sejam iguais, mas 'c' seja diferente
    else if (a == b && a != c) {
        if (c > a) {
            printf("a e b sao iguais e c eh o maior numero.");
        } else {
            printf("a e b sao iguais e c eh o menor numero.");
        }
    }
    // Caso 'a' e 'c' sejam iguais, mas 'b' seja diferente
    else if (a != b && a == c) {
        if (b > a) {
            printf("a e c sao iguais e b eh o maior numero.");
        } else {
            printf("a e c sao iguais e b eh o menor numero");
        }
    }
    // Caso 'a' seja o menor número
    else {
        printf("a eh o menor numero.\n");
        // Verifica a relação entre 'b' e 'c' para determinar o elemento do meio e o maior número
        if (b > c) {
            printf("b eh o maior numero.\n");
            printf("c eh o numero do meio.");
        } else if (b == c) {
            printf("b e c sao iguais.");
        } else {
            printf("b eh o numero do meio.\n");
            printf("c eh o maior numero.");
        } 
    }

    return 0;
}
