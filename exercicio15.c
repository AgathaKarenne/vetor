#include <stdio.h>

int main(){
	
	int vetor[10];
    int maior;

	for(int i = 0; i < 10; i++){
	 	printf("digite os valores");
        scanf("%d", &vetor[i]);
    }

    //verificar se existe algum valor igual a posicao do vetor
    for (int i = 0; i < 10; i++){
        maior = 0;
        for (int j = i+1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                maior = 1;
            }
        }
        if(maior != 1){
            printf("Valores sem repetição: %d", vetor[i]);
        }
    }
    
}
