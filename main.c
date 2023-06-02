#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() {
    int tamanho, opcao;

    printf("Digite o tamanho do seu vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do seu vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nOpções:\n");
    printf("1. Bubble Sort\n");
    printf("2. Insertion Sort\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            bubbleSort(vetor, tamanho);
            printf("\nBubble Sort: ");
            imprimirVetor(vetor, tamanho);
            break;
        case 2:
            insertionSort(vetor, tamanho);
            printf("\nInsertion Sort: ");
            imprimirVetor(vetor, tamanho);
            break;
        default:
            printf("\nOpção inválida.\n");
    }
    
    return 0;
}
