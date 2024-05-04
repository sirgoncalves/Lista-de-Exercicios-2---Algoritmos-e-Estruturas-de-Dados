/*2. Escreva um programa que calcule a amplitude total (AT) de uma série de cinco números. A
amplitude e definida pela diferença entre o menor e o maior número.
AT = maior valor – menor valor*/

#include <stdio.h>
int main()
{   
    //declaração de variáveis
    int  maior=0, menor=0, numero, i=0;
    
    //recebe um número do usuário
    printf("numero 1:");
    scanf("%d", &numero);
    maior = numero; //maior recebe numero
    menor = numero; //menor recebe numero
    
    //o while vai repetir 4 vezes, verificar cada valor inserido pelo usuário e, depois, colocar na nas variáveis "menor" e "maior" o menor e o maior número
    //o primeiro valor recebido é usado para comparar e, depois disso, o while armazena valores nas variáveis caso as condições forem verdadeiras
    while (i<=3)
    {
        printf("numero %d:",i+2); 
        scanf("%d",&numero); 

        if(numero > maior){
         maior = numero;

        }else if (numero < menor){
        menor = numero;
        }
        i++;

     }
    printf("o maior eh: %d\n", maior);
    printf("o menor eh: %d\n", menor);
    printf("A amplitude eh: %d", maior - menor);

return 0;
}
    
