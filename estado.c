/*3. Uma empresa vende o mesmo produto para quatro estados diferentes. Cada estado possui
uma alíquota de imposto sobre o produto. Escreva um programa em que o usuário insira o valor
e a primeira letra do estado de destino do produto. O programa deve retornar o preço final
(produto + imposto). Se o estado não for válido, o sistema deve mostrar uma mensagem de erro.
1. Indique o estado pelo primeiro caractere da sigla
2. Trate/rejeite as entradas inválidas*/

#include <stdio.h>
int main()
{
    //declaração de variáveis
    float precoFinal, precoInicial;
    char destino;

    //campos que solicitam local/estado e valor do produto
    printf("Insira o valor do produto: ");
    scanf("%f", &precoInicial);

    printf("Insira o destino de seu produto: \n");
    printf("M - Minas Gerais\n");
    printf("S - Sao Paulo\n");
    printf("R - Rio de Janeiro\n");
    printf("E - Espirito Santo\n");
    scanf("%s", &destino);

    //para cada caso/estado os juros/resultados são diferentes
    switch (destino)
    {
    case 'M':
        precoFinal = 1.07*precoInicial;
        printf("O valor final do produto + impostos: R$%.2f", precoFinal);
        break;
    case 'S': 
        precoFinal = 1.12*precoInicial;
        printf("O valor final do produto + impostos: R$%.2f", precoFinal);
        break;
    case 'R': 
        precoFinal = 1.15*precoInicial;
        printf("O valor final do produto + impostos: R$%.2f", precoFinal);
        break;
    case 'E': 
        precoFinal = 1.08*precoInicial;
        printf("O valor final do produto + impostos: R$%.2f", precoFinal);
        break;
    default:
        printf("Insira uma inicial de destino valida!");
        break;
    }

return 0;
}