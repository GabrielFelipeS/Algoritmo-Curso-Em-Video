#include <stdio.h>


int main (void)
{
    float number1 = 0, number2 = 0;
    printf("Nota 1: ");
    scanf("%f", &number1);
    printf("Nota 2: ");
    scanf("%f", &number2);
    printf("A média entre %.2f e %.2f é igual a %.2f",number1, number2, ((float)number1 + number2)/2);

}