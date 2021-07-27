#include <stdio.h>

int main (void) {
    int vetor[1000], tmp, aux, min;
    while (scanf("%d", &vetor[aux]) != EOF) {
        aux++;
    }
    for (int i = 0; i < aux; i++) {
        min = i;
        for (int j = i + 1; j < aux; j++)
        {
            if(vetor[j]<vetor[min]) {
                min = j;
            }
        }
        tmp = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = tmp;
    }

    for (int i = 0; i < aux-1; i++) {
        printf("%d ", vetor[i]);
    }
    printf("%d\n", vetor[aux - 1]);
    return 0;
}