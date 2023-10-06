#include <stdio.h>

int main(){

  int vetor[7];
  int x, y, soma = 0;

  /*pedir os valores de 8 posições*/
  printf("digite os numeros correspondentes a posição dada pelo vetor:\n");
  for(int i = 1; i < 7; i++){
        printf("vetor[%d]", i);
        scanf("%d", &vetor[i]);

    }
  /*peça o valor de x e y para fazer a soma*/
      printf("Digite o valor de x:");
      scanf("%d", &x);
      printf("Digite o valor de y:");
      scanf("%d", &y);
  
  /*aqui deve ser apresentada a soma dos valores x e y*/

  for(int i = 1; i < 7; i++){
      if(x > 0 && x < 7 && y > 0 && y < 7){
          int soma = vetor[x] + vetor[y];
          printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
      }
  }

}
