#include<stdio.h>

main(){

    int valores[5], soma = 0, somaEspecifico;

    for(int i = 0; i < 5; i++){
        printf("digite o valor");
        scanf("%d", &valores[i]);
    }

    for(int i = 0; i < 5; i++){
        soma += valores[i];

        printf("\n valor em valores[%d] = %d", i, valores[i]);
        printf("\n Soma: %d", soma);

    }
    somaEspecifico = valores[0] + valores[1] + valores[2] + valores[3] + valores[4];
    printf("soma especifica: %d", somaEspecifico);
}