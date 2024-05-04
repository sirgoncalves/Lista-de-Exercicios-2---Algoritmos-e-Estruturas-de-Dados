/*7. Escreva um programa que calcule as raízes da equação do 2º grau (ax² + bx + c); os valores de
a, b e c são fornecidos pelo usuário.*/

#include <stdio.h>
#include <math.h>
int main()
{
    //declaração de variáceis
    float a, b, c, raiz1, raiz2, delta;

    //solicitação de valores para a, b e c ao usuário
    printf("Insira valores para a, b e c, respectiamente: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    //calculo de delta realizado anteriormente 
    delta = pow(b,2)-(4 * a * c);

    /*verifica se delta é maior ou igual a zero, pois, ao tirar a raíz quadrada,
    se o radicando for negativo, sairemos do conjunto real e entraremos no conjunto complexo e,
    nesse caso, não existem raízes reais da equação quadrática*/
    if(delta>=0){
        
        //operações para encontrar as duas raízes
        raiz1 = (- b + sqrt(delta))/(2*a);
        raiz2 = (- b - sqrt(delta))/(2*a);

        printf("primeira raiz: %.2f; segunda raiz: %.2f", raiz1, raiz2);
    }else{
        printf("nao existe raiz real"); //caso o radicando for negativo
    }

return 0; 

}
