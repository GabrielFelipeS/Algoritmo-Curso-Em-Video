#include <stdio.h>


int main (void)
{
    float salario = 0, aumento;
     printf("Salário: ");
        scanf("%f", &salario);
    aumento = salario + (salario * 0.15);

    printf("O se novo salrio é %.2f", aumento);
}

