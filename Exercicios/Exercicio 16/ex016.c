#include <stdio.h>


int main (void)
{
    int qtd_cigarros, anos, min_reduzido , reducao_de_dias = 0; 
    int duracao_dia = 1440, perda_em_min = 10, duracao_ano = 365;
    
    printf("Quantos cigarros por dia? ");
        scanf("%i", &qtd_cigarros);
        
    printf("Quantos anos você fuma? ");
        scanf("%i", &anos);
        
    min_reduzido = (qtd_cigarros * (anos * duracao_ano)) * perda_em_min;
    

    while(min_reduzido >= duracao_dia)
    {
        reducao_de_dias++;
        min_reduzido -= duracao_dia;
    }
    
    printf("Total de dias perdidos para o cigarro é %i dias", reducao_de_dias);
}

