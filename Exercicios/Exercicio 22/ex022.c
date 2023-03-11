#include <stdio.h>


int main (void)
{
    int nascimento, hoje = 2022;
    printf("Digite sua data de nascimento: ");
    scanf("%i", &nascimento);
    
    int idade = hoje - nascimento;
    if(idade < 18)
    {
        printf("Falta %i anos para o alistamento\n", 18 - idade );
    }
    else if (idade > 18)
    {
        printf("Ja se passaram %i do alistamento", idade - 18);
    }
}


