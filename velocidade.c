/*8. Escreva um programa que calcule a velocidade de queda de um corpo em função do tempo,
partindo da velocidade zero, considerando a gravidade de diferentes planetas conforme a tabela
a seguir. Seu programa deve receber do usuário o tempo (em milissegundos) de queda e um
caractere indicando o planeta em que a queda ocorreu --> O tempo informado deve ser maior que zero.

Planeta Gravidade Caractere indicativo
Terra 9,807 m/s² T
Vênus 8,87 m/s² V
Mercúrio 3,7 m/s² M
*/

#include <stdio.h>
int main()
{
    //declaração de variáveis
    float miliS, velocidade;
    char planeta;

    //solicita ao usuário o tempo
    printf("Insira o valor de tempo em milissegundos: ");
    scanf("%f", &miliS);

    //verifica que se tempo é maior que zero
    if(miliS > 0){
        //opções de aceleração da gravidade para serem escolhidas
        printf("Indique em qual planeta que ocorreu a queda:\n");
        printf("T - Terra 9.807 m/s^2\n");
        printf("V - Venus 8.87 m/s^2\n");
        printf("M - Mercurio 3.7 m/s^2\n");
        scanf("%s", &planeta);
        
        //verifica qual opção o usuário escolheu
        //obs: é necessário converter o tempo em milissegundo para segundo (dividir por 1000)
        switch (planeta){
            case 'T':
                velocidade = (miliS/1000.0)*9.807;
                printf("A velocidade de queda na terra foi de: %.2f m/s", velocidade);
                break;
            case 'V':
                velocidade = (miliS/1000.0)*8.87;
                printf("A velocidade de queda em venus foi de: %.2f m/s", velocidade);
                break;
            case 'M':
                velocidade = (miliS/1000.0)*3.7;
                printf("A velocidade de queda em Mercurio foi de: %.2f m/s", velocidade);
                break;  
            default:
                printf("Escreva valores validos - olhe as opcoes");
                break;
            }
    }else{
        printf("Tempo invalido!");
         }

return 0;

}