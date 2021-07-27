#include <stdio.h>

int main (void) {
    int vetor[1000], tmp, aux;
    while (scanf("%d", &vetor[aux]) != EOF) {
        aux++;
    }
    for (int i = 0; i < aux; i++) {
        for (int j = i + 1; j < aux; j++) {
            if(vetor[j]<vetor[i]) {
                tmp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = tmp;
            }
        }
    }
    for (int i = 0; i < aux-1; i++) {
        printf("%d ", vetor[i]);
    }
    printf("%d\n", vetor[aux - 1]);
    return 0;
}