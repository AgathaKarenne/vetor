#include <stdio.h>

int main() {
	
    int valores[5];
    int maior, menor;
    int media = 0;


    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }

   	 maior = valores[0];
   	 menor = valores[0];
   	 
    for (int i = 0; i < 5; i++) {
        	if (valores[i] > maior) {
            	maior = valores[i];
        }
       		 if (valores[i] < menor) {
            	menor = valores[i];
        }
        
        media += valores[i];
    }
    media /= 5;

    printf("Valores lidos: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);
    
}
