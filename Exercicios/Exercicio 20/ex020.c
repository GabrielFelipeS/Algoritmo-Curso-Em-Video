#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if( numero % 2 == 0)
    {
        printf("O número digitado é par");
    }
    else if( numero % 2 != 0)
    {
        printf("O número digitado não é par");
    }
}



