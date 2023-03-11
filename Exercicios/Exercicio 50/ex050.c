#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    srand(time(NULL));

    int number[20],acima_cinco = 0, div_tres = 0, tamanho = sizeof(number)/sizeof(number[0]);;

    for(int i = 0;i <= 20;i++){
        number[i] = rand() % 100;
        if(number[i] > 50){
            acima_cinco++;
        }
        if(number[i] % 3 == 0){
            div_tres++;
        }
    }
    printf("Quais foram os números sorteados: ");
    for(int i = 0;i < tamanho;i++){
        printf("%i ", number[i]);
    }
    printf("\nQuantos números estão acima de 50: %i\nQuantos números são divisíveis por 3: %i", acima_cinco ,div_tres);
}

