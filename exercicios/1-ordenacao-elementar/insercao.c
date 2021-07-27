#include <stdio.h>

int main (void) {
    int vetor[50000], tmp, aux, min;
    while (scanf("%d", &vetor[aux]) != EOF) {
        aux++;
    }
    for (int i = aux-1; i >0; i--) {
        if(vetor[i] < vetor [i-1]) {
            tmp = vetor[i];
            vetor[i] = vetor[i - 1];
            vetor[i - 1] = tmp;
        }
    }
    for (int j = 2; j <= aux - 1; j++) {
        int i = j;
        tmp = vetor[i];
        while(tmp< vetor[i-1]) {
            vetor[i] = vetor[i - 1];
            i--;
        }
        vetor[i] = tmp;
    }

        for (int i = 0; i < aux - 1; i++)
        {
            printf("%d ", vetor[i]);
        }
    printf("%d\n", vetor[aux - 1]);
    return 0;
}
