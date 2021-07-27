#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(void)
{
    int vetor[50000], tmp, aux, min;
    while (scanf("%d", &vetor[aux]) != EOF) {
        aux++;
    }
    insertionSort(vetor, aux);
    printVector(vetor, aux);
    return 0;
}