#include <stdio.h>


int main (void)
{
    int number1 = 0, number2 = 0;
    printf("Digite um valor: ");
    scanf("%i", &number1);
    printf("Digite outro valor: ");
    scanf("%i", &number2);
    printf("A sona entre %i e %i é igual a %i",number1, number2, number1 + number2);

}