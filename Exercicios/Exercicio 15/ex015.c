#include <stdio.h>


int main (void)
{
    int dias, hora = 8, porhora = 25, salario;
    printf("Quntos dias trabalhoados?  ");
        scanf("%i", &dias);
    salario = ( 8 * 25) * dias;
    
    printf("O salário é %i", salario);
}

