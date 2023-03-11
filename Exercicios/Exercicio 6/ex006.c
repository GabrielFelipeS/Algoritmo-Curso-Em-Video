#include <stdio.h>


int main (void)
{
    int number1 = 0;
    printf("Digite um número: ");
    scanf("%i", &number1);
    printf("O antecessor de %i é %i\nO sucessor de %i é %i",number1, number1-1, number1, number1+1);
}