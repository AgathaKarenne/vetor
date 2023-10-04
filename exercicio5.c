#include<stdio.h>

int main(){

  int vetor[10];
  int par = 0;

  /*pedir os valores de 10 posições*/
  printf("digite os numeros correspondentes a posição dada pelo vetor:\n");
  for (int i = 0; i < 10; i++){
    printf("vetor[%d]", i);
    scanf("%d", &vetor[i]);
    
  }
  /*contar somente os valores pares*/
  for(int i = 0; i < 10; i++){
    if(vetor[i] % 2 == 0){
      par++;
    }
  }
  /*imprimir os numeros pares*/
  printf("o vetor tem %d valores pares:\n", par);
}
