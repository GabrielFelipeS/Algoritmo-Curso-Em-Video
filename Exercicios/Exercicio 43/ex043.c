#include <stdio.h>

int main (void)
{
     for (int valor = 30;valor >= 1 ;valor--){
         
         if(valor % 4 == 0){
             printf("[%i] ", valor);
             
         } else{
             printf("%i ", valor);
         }
     } 
     
     
     
}

