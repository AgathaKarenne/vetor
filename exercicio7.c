#include<stdio.h>

int main(){

    int inteirosVetor[10];
    int maiorElemento = 0, posicao;

    printf("digite os numeros inteiros");
    for (int i = 0; i <= 9; i++){
        printf("vetor[%d]", i + 1);
        scanf("%d", &inteirosVetor[i]);

    }
    
    maiorElemento = posicao + inteirosVetor[10];

    for (int i = 0; i <= 9; i++){
        if(inteirosVetor > maiorElemento){
           maiorElemento = inteirosVetor;
        }
    }   

    printf("O maior elemento dos valores inteiros é: %d\n",  maiorElemento);
    

}