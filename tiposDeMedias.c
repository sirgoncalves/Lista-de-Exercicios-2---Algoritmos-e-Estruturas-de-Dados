/*9. Escreva um programa que leia quatro números inteiros positivos (w, x, y e z) e efetue o cálculo
de uma das seguintes médias de acordo com o valor de w conforme a tabela a seguir:
Valor 𝒘 Tipo de média Cálculo
1 Geométrica √𝑥 ⋅ 𝑦 ⋅ 𝑧
2 Ponderada (𝑥 + 2𝑦 + 3𝑧)/6
3 Harmônica 3/((1/x) + (1/y) + (1/z)
4 Aritmética (𝑥 + 𝑦 + 𝑧)/3
*/

#include <stdio.h>
#include <math.h>
int main()
{
    //declaração de variáveis 
    int w, x, y, z;
    float result;

    //solicita valores para x, y e z
    printf("Insira um valor inteiro positivo para x: ");
    scanf("%d", &x);
    printf("Insira um valor inteiro positivo para y: ");
    scanf("%d", &y);
    printf("Insira um valor inteiro positivo para z: ");
    scanf("%d", &z);

    //mostra as opções de cálculo
    printf("Escolha um tipo de media para o calculo:\n");
    printf("1 - Geometrica cbrt(x.y.z)\n");
    printf("2 - Ponderada (x + 2y + 3z)/6\n");
    printf("3 - Harmonica 3/((1/x) + (1/y) + (1/z)\n");
    printf("4 - Aritmetica (x + y + z)/3\n");
    scanf("%d", &w);

    //verifica qual foi escolhido pelo usuário e printa o resultado do cálculo
    switch (w)
    {
    case 1:
        result = cbrt(x*y*z);
        printf("O valor da media geometrica eh: %.2f", result);
        break;
    case 2:
        result = (x + 2*y + 3*z)/6.0;
        printf("O valor da media ponderada eh: %.2f", result);
        break;
    case 3:
        result = 3/((1.0/x) + (1.0/y) + (1.0/z));
        printf("O valor da media harmonica eh: %.2f", result);
        break;
    case 4:
        result = (x + y + z)/3.0;
        printf("O valor da media geometrica eh: %.2f", result);
        break; 
    default:
        printf("Insira valores validos!");
        break;
    }

return 0;


}