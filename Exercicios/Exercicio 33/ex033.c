#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int valor_casa, salario = 0, anos;


    printf("Qual o valor da casa? ");
        scanf("%i", &valor_casa);

    printf("\nQual o salario do comprador? ");
        scanf("%i", &salario);
        int exceder = salario + (( salario * 30 )/100);

    printf("\nQuantos anos ele vai pagar? ");
        scanf("%i", &anos);
        int meses = 12 / anos;
        
        int prestacao = valor_casa / meses;
        
        if (prestacao > salario * 0.3)
        {
            printf("Infelizmente você não pode obter o empréstimo");
        }
        else{
            printf("Valor da prestação: R$ %i Empréstimo OK", prestacao);
        }


}

