/*4. Escreva um programa que indique o nome do mês por extenso, de acordo com um número
digitado pelo usuário.
Exemplo: Entrada = 4. Saída = "Abril". Seu programa deve exibir o mês correspondente para
qualquer valor de 1 a 12. Caso o usuário digite um valor menor que 1 ou maior que 12, seu
programa deve exibir a mensagem: “Mês inválido”*/

#include <stdio.h>
int main()
{
    //declaração de variável
    int mes;

    //solicita uma variável ao usuário
    printf("Insira um numero: ");
    scanf("%d", &mes);

    //cada número corresponde à um mês do ano
    switch (mes)
    {
    case 1: 
        printf("Mes correspondente: Janeiro");
        break;
    case 2: 
        printf("Mes correspondente: Fevereiro");
        break;
    case 3: 
        printf("Mes correspondente: Marco");
        break;
    case 4: 
        printf("Mes correspondente: Abril");
        break;
    case 5: 
        printf("Mes correspondente: Maio");
        break;
    case 6: 
        printf("Mes correspondente: Junho");
        break;
    case 7: 
        printf("Mes correspondente: Julho");
        break;
    case 8: 
         printf("Mes correspondente: Agosto");
        break;
    case 9: 
        printf("Mes correspondente: setembro");
        break;
    case 10: 
        printf("Mes correspondente: Outubro");
        break;
    case 11: 
        printf("Mes correspondente: Novembro");
        break;
    case 12: 
        printf("Mes correspondente: Dezembro");
        break;
    default:
        printf("Valor invalido");
        break;
    }
return 0;

}