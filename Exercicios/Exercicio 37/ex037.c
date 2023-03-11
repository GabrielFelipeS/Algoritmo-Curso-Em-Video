#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int salario, anos, novo_salario = 0;
    char sexo[8], homem[] = "homem";

    printf("Digite o seu salario atual: ");
        scanf("%i", &salario);
    printf("Quantos anos trabalha aqui? ");
        scanf("%i", &anos);
    printf("Digite seu sexo: ");
        scanf("%s", sexo);


    if(strcmp(sexo, "homem") == 0){

        novo_salario = anos < 15? salario+(salario*0.03): anos < 20? salario+(salario*0.13) : salario+(salario*0.25);

    } else if(strcmp(sexo, "mulhere") == 0)
    {
        novo_salario = anos < 15? salario+(salario*0.05): anos < 20? salario+(salario*0.12) : salario+(salario*0.23);


    } else{
        printf("ERRO! insiria um valor valido no campo 'sexo' ");
    }

    printf("O seu novo salário é %i", novo_salario);
    return 0;
}
