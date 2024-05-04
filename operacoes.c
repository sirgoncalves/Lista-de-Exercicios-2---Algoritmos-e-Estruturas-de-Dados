/*6. Escreva um programa que receba três valores do usuário: A, B e C. Seu programa deve verificar
se C é divisível por A e/ou B. Caso C seja divisível por A e B, imprima na tela “Divisível por ambos”.
Caso C seja divisível por A ou por B, mas não por ambos, imprima na tela “Divisível por um”. Caso
C não seja divisível nem por A nem por B, imprima na tela “Não é divisível”. Caso o usuário digite
um valor negativo ou zero para A e/ou B, imprima na tela “Valor inválido” e finalize a execução
do programa*/

#include <stdio.h>
int main()
{
    //variáveis declaradas 
    int a, b, c;
    //solicita ao usuário valores para a, b e c
    printf("Insira um valor para a, b e c, respectivamente: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);


    //verifica se a e b são positivos e diferentes de zero (enunciado exige)
    if(a>0 && b>0){
        if(c%a==0 && c%b==0){ //verifica se o resto da divisão de c por a e b é zero, ou seja, retorna um resultado inteiro
            printf("c eh divisivel por ambos");
        }else if(c%a==0 && c%b!=0){ //verifica, somente, se c é divisível por a
            printf("c eh divisivel por a");
        }else if(c%a!=0 && c%b==0){ //verifica, somente, se c é divisível por b
            printf("c eh divisivel por b");
        }else{
            printf("c nao eh divisivel por ambos"); //quando nenhuma das condições anteriores for verdadeira 
        }
    }else{
        printf("valor invalido"); //quando a primeira condição for falsa
    }


return 0;
}