#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int novamente;
    int resposta;
    do{
        srand(time(NULL));
        
        int sorteado = rand() % 5 ;
        printf("\033[2J \033[2;3H Tente adivinhar o numero sorteado de 1 a 5\n");
        scanf("%i", &resposta);

        if(resposta == sorteado){
            printf("Parabens você acertou\n");
        }
        else{
            printf("Você errouuu!!!\n");
        }

        
        printf("Deseja jogar novamente? digite 1 para SIM: ");
        scanf("%i", &novamente);
    }while(novamente == 1);

}

