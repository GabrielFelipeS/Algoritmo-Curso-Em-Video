#include <stdio.h>


int main (void)
{
    int nascimento, ano_atual = 2022;
    printf("Qual o ano de seu nascimento? ");
    scanf("%i", &nascimento);

    int idade =  ano_atual - nascimento;
    if(idade >= 18)
    {
        printf("Pode votar\n");
    }
    else
    {
        printf("Não pode votar\n");
    }
}

