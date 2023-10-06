#include<stdio.h>

int main(){

    int vetor[6];

    for (int i = 0; i < 6; i++)
    {
        do
        {
           printf("digite um numero par");
           scanf("%d", &vetor[i]);
           if(vetor[i] % 2 != 0){
                printf("invalido");
           }
        } while(vetor[i] % 2 != 0);
        
    }
    
}