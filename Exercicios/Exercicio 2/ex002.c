#include <stdio.h>


int main (void)
{
    char name[64];
    int salario = 0;
    printf("Nome do funcionário: ");
    scanf("%s", name);
    printf("Salário: ");
    scanf("%i", &salario);
    printf("O funcionário %s tem um salário de R$%i em Junho.", name, salario);
}