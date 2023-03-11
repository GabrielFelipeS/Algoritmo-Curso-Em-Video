#include <stdio.h>
#include <string.h>

int main (void)
{
 char tipo_carro[7], popular[] = "popular";
 int dias;
 float km, reais;
    printf("Qual o tipo de carro? popular/luxo ");
        scanf("%s", tipo_carro);


    printf("\nQuantos dias de aluguel? ");
        scanf("%i", &dias);


    printf("\n Quantos km foram percorridos? ");
        scanf("%f", &km);

    if(strcmp(tipo_carro, popular))
    {
        if(km > 100){
            reais = (km * 0.10) + (dias * 90);
        }
        else{
            reais = (km * 0.20) + (dias * 90);
        }
    }

    else
    {
        if(km > 200){
            reais = (km * 0.25) + (dias * 150);
        }
        else{
            reais = (km * 0.30) + (dias * 150);
        }
    }

    printf("O preço a ser pago é R$%.2f ", reais);
}

