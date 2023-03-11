#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main (void)
{

    char sexo;
    int valor_compra;

    string name = get_string("Nome: ");
    
    //scanf("%s", &name);
    printf("Sexo: ");
    scanf("%c", &sexo);
    sexo = toupper(sexo);
    printf("Valor da compra: ");
    scanf("%i", &valor_compra);


    if( sexo == 'H')
    {
        valor_compra -= (valor_compra  * 5)/100;
    }

    else if(sexo == 'M')
    {
        valor_compra -= (valor_compra  * 13)/100;
    }

    printf("Valor da compra da %s é de %i", name, valor_compra);

}


