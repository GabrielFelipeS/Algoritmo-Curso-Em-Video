#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int vetor[15];
vetor[0] = 55;

int main (void)
{

        char resposta;
        srand(time(NULL));
        //Escolah do jogador
        printf("Digite a letra correspondente a sua jogada P(papel) , R(pedra) e T(tesoura): ");
            scanf("%c", &resposta);
            resposta = toupper(resposta);

        //Controle de resposta
      // if((resposta == 'P' || resposta == 'R' || resposta == 'T') == false){printf("Digite uma escolha valida"); return 0;}

    char jogada_bot = (rand() % 3) == 0? 'R': (rand() % 3) == 1? 'P' : 'T';
    
    //Para printar a escolha do BOT
     string jogada_bot_print = jogada_bot == 'R'? "Pedra" : jogada_bot == 'P'? "Papel" : "Tesoura";
     
     //Para printar a escolha do jogador
     string resposta_print = resposta == 'R'? "Pedra" : resposta == 'P'? "Papel" : "Tesoura";
     
     printf("O jogador escolheu %s e o Bot jogou %s\n", resposta_print, jogada_bot_print);

    int result;
    switch(resposta){
        case('P'):
        {
            result = jogada_bot == 'R'? printf("Você ganhou!!\n") : jogada_bot == 'T'? printf("Você PERDEU!!\n") : printf("EMPATOU!!\n");
        }
        break;

        case('R'):
        {
            result = jogada_bot == 'T'? printf("Você ganhou!!\n") : jogada_bot == 'P'? printf("Você PERDEU!!\n") : printf("EMPATOU!!\n");
        }
        break;

        case('T'):
        {
            result = jogada_bot == 'P'? printf("Você ganhou!!\n") : jogada_bot == 'R'? printf("Você PERDEU!!\n") : printf("EMPATOU!!\n");
        }
        break;
    }
}

