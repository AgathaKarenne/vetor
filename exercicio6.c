#include<stdio.h>
#include<stdlib.h>

int main(){

  int vetor[10];
  int i, menor, maior;

  /*peça os valores de 10 posições*/
  printf("digite os numeros correspondentes a posição dada pelo vetor:\n");
  for(int i = 0; i < 10; i++){
    printf("vetor[%d]", i + 1);
    scanf("%d", &vetor[i]);
  }
  /*chamar as variavais de maior e menor valor do vetor*/
   maior = menor = vetor[0];
  
 /*disponibilizar a função para encontrar o maior e menor valor do vetor*/
  for(int i = 0; i < 10; i++){
    if(vetor[0] > maior){
        maior = vetor[0];
      
    }if(vetor[0] > menor){
        menor = vetor[0];
    }
  }
  /*imprimir o maior e o menor valor do vetor*/
  printf("o maior valor é: %d\n", maior);
  printf("o menor valor é: %d\n", menor);

}
