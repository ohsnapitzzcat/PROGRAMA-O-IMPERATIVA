#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <assert.h>

void ex1() {
    int maior = INT_MIN; // constante que representa o valor minimo que um inteiro pode ter em C
    puts("Maior de uma sequência\n Insere uma sequencia de inteiros terminada em 0");
    while (1) {
        int num;
        assert(scanf("%d",&num) == 1);
        if (num == 0) break;
        if (num > maior) maior = num;
    }
    printf("Maior: %d\n", maior);
}
