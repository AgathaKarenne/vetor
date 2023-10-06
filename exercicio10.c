#include <stdio.h>

int main() {
    int notas[15];
    int media, total = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &notas[i]);
    }
    for (int i = 0; i < 15; i++) {
        total = total + notas[i];
    }

    media = total / 15;

    printf("A media geral e: %d", media);
