#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubblesort.c"
#include "quicksort.c"
#include "randixsort.c"
#include "selectionsort.c"

#define MAX 10000
#define MIN 1000
#define LIMITE 1024
    
void preenche_vetore_dados_MAX (int *vetor_MAX){ 
    srand(time(NULL)); // Inicializa a semente com o tempo atual
    for (int i = 0; i < MAX; i++) {
        vetor_MAX[i] = rand() % (LIMITE + 1); // Limita os valores para ficarem entre 0 e LIMITE
    }
}

void preenche_vetore_dados_MIN (int *vetor_MIN){
    for (int j = 0; j < MIN; j++) {
        vetor_MIN[j] = rand() % (LIMITE + 1); // Limita os valores para ficarem entre 0 e LIMITE
    }
}

void imprime_vetor(int *vetor, int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        if (i == 0) {
            printf("%d", vetor[i]);
            continue;
        }
        printf(", %d", vetor[i]);
    }
    printf("]\n");
}

void imprime_vetores(int *vetor_MAX, int *vetor_MIN) {
    printf("Vetor MAX = ");
    imprime_vetor(vetor_MAX, MAX);
    printf("\n\n");
    printf("Vetor MIN = ");
    imprime_vetor(vetor_MIN, MIN);
}

void menu_ordenacao(int *vetor, int tamanho) {
    int controle2 = 1;
    while (controle2 == 1) {
        printf("\n\nEscolha o método de ordenação:\n");
        printf("1 - Bubble Sort\n");
        printf("2 - Quick Sort\n");
        printf("3 - Radix Sort\n");
        printf("4 - Selection Sort\n");
        int opcao_sort;
        scanf("%d", &opcao_sort);
        switch (opcao_sort) {
            case 1:
                controle2 = 0;
                bubbleSort(vetor, tamanho);
                imprime_vetor(vetor, tamanho);
                break;
            case 2:
                controle2 = 0;
                quick_sort(vetor, 0, tamanho - 1);
                imprime_vetor(vetor, tamanho);
                break;
            case 3:
                controle2 = 0;
                radixsort(vetor, tamanho);
                imprime_vetor(vetor, tamanho);
                break;
            case 4:
                controle2 = 0;
                selection_Sort(vetor, tamanho);
                imprime_vetor(vetor, tamanho);
                break;
            default:
                printf("Opção inválida\n\n");
                break;
        }
    }
}