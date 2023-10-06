#include <stdio.h>

int main() {
	
    int valores[5];
    int maior, menor;
    int posicao = 0;


    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }
   	 
    for (int i = 0; i < 5; i++) {
        	if (valores[i] > maior) {
            	maior = valores[i];
        }
       		 if (valores[i] < menor) {
            	menor = valores[i];
        }
        
         maior = posicao + valores[5];
    }

      for (int i = 0; i < 5; i++){
        if(valores[i] > maior){
           maior = valores;
        }
    }   

    printf("O maior dos valores é: %d\n",  maior);
    printf("O menor dos valores é: %d\n",  menor);
    printf("Ele está na posição: vetor[%d]\n", posicao);
    
    
}
