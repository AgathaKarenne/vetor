#include <stdio.h>

int main(){
	
	int vetor[10];
    int iguais;

	for(int i = 0; i < 10; i++){
	 	printf("digite os valores");
        scanf("%d", &vetor[i]);
    }

    //verificar se existe algum valor igual a posicao do vetor
    for (int i = 0; i < 10; i++){
        iguais = 0;
        for (int j = i+1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                printf("%d", vetor[i]);
            }
        }
        
    }
    
}

