/*5. Escreva um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (1. soma, 2. subtração, 3. multiplicação, 4. divisão e 5. módulo). O usuário escolhe
uma das opções (1 a 5), e o seu programa recebe dois valores numéricos do usuário e realiza a
operação escolhida (somente a escolhida), mostrando o resultado. Caso a opção digitada seja
inválida (ou seja, menor que 1 ou maior que 5) ou os valores recebidos sejam inválidos, seu
programa deve mostrar uma mensagem indicando incorreção na entrada de dados*/

#include <stdio.h>
int main ()
{
    //declaração de variáveis 
    int opcao, valor1, valor2;

    //solicita ao usuário valores
    printf("Insira dois valores inteiros: \n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);

    //verifica se os números inseridos são inteiros
    if(valor1%1!=0 || valor2%1!=0){

                printf("entrada(s) invalida(s)!");
    }else{

                //mostra um menu de operações ao usuário
                printf("Qual operacao deseja fazer?\n");
                printf("1 - Soma\n");
                printf("2 - Subtracao\n");
                printf("3 - Mltiplicacao\n");
                printf("4 - Divisao\n");
                printf("5 - Modulo\n");
                
                //o usuário insere a opção desejada
                scanf("%d", &opcao);

                //o switch case retornará um resultado com base na escolha do usuário
                switch (opcao){
                case 1:
                        printf("O resultado da soma eh: %d", valor1+valor2);
                        break;
                case 2:
                        printf("O resultado da subtracao eh: %d", valor1-valor2);
                        break;
                case 3:
                        printf("O resultado da multiplicacao eh: %d", valor1*valor2);
                        break;
                case 4:
                        printf("O resultado da divisao eh: %.2f", (float)valor1/(float)valor2);
                        break;
                case 5:
                        printf("O resultado do modulo eh: %d", valor1%valor2);
                        break;  
                default:
                        printf("erro na entrada de dados");
                        break;
   
                 }
    
        }
   
return 0;

}