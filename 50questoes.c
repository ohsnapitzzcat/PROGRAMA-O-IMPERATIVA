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

void ex2(){
    double soma = 0;
    int n = 0;
    puts("Média da sequencia\n Insira uma sequencia de numeros inteiros terminados em 0:");
    while(1) {
        int num;
        assert(scanf("%d",&num) == 1);
        if (num == 0) break;
        soma += num;
        n++;
    }
    double media = soma / n;
    printf("Média: %.5f\n", media);
}

void ex3(){
    int max = INT_MIN, segundomax = INT_MIN;
    puts("Segundo maior\n Insira uma sequencia de numeros terminada em 0:");
    while (1){
        int num;
        assert(scanf("%d", &num) == 1);
        if (num == 0) break;
        if (num > max) {
             segundomax= max;
             max = num;
         } else if (num > segundomax) segundomax = num;
    }
    printf("Segundo maior numero: %d\n", segundomax);
}

