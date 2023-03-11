#include <stdio.h>


int main (void)
{
    float number1 = 0;
    printf("Digite um número: ");
    scanf("%f", &number1);
    printf("O dobro de %.2f é %.2f\nAterça parte de %.2f é %f",number1, number1*2, number1, number1/3);
}