#include<stdio.h>

int main(){

    int inteirosVetor[10];
    int maiorElemento = 0, posicao = 0;

    printf("digite os numeros inteiros");
    for (int i = 0; i < 10; i++){
        printf("vetor[%d]", i + 1);
        scanf("%d", &inteirosVetor[i]);

    }
    
    maiorElemento = posicao + inteirosVetor[10];

    for (int i = 0; i <= 10; i++){
        if(inteirosVetor[i] > maiorElemento){
           maiorElemento = inteirosVetor;
        }
    }   

    printf("O maior elemento dos valores inteiros é: %d\n",  maiorElemento);
    printf("Ele está na posição: vetor[%d]\n", posicao);
    

}
