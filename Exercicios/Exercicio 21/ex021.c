#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    int ano;
    printf("Digite o ano: ");
    scanf("%i", &ano);
    
    if( ano % 4 == 0)
    {
        printf("é um ano BISSEXTO");
    }
    else
    {
        printf("Não é m ano BISSEXTO");
    }
}



