#include <stdio.h>


int main (void)
{
    float nota1 = 0, nota2 = 0;
    printf("Digite a primeira nota: ");
        scanf ("%f", &nota1);

    printf("Digite a segunda nota: ");
        scanf ("%f", &nota2);

    printf("A média entre %.2f e %.2f é igual a %.2f", nota1, nota2, (nota1 + nota2)/2.0 );

}

