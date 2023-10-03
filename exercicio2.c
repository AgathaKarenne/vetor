#include<stdio.h>

main(){

    int inteiros[6];

    for(int i = 1; i < 6; i++){
        printf("Digite os numeros");
        scanf("%d", &inteiros[1]);

    }

    for(int i = 0; i < 6; i++){
        printf("\ninteiros[%d] = %d", i, inteiros[i]);
    }
}