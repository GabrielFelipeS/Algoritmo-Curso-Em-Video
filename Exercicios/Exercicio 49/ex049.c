#include <stdio.h>

int main (void)
{
    int number = 0, qtd_par = 0, qtd_impar = 0;
    for(int i = 0;i <=6 ;i++){
        printf("Digite o %iº número: ", i+1);
            scanf("%i", &number);
        if(number % 2 == 0){
            qtd_par++;
        }
        else{
            qtd_impar++;
        }
    }

    printf("Quantidade de pares: %i\n", qtd_par);
    printf("Quantidade de impares: %i\n", qtd_impar);
}

