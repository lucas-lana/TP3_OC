#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Inclui a biblioteca para usar tipo bool
#include "Mul_C_Matrx.c" // Inclui o arquivo Mul_C_Matrx.c
#include "dados.c" // Inclui o arquivo dados.c

#define MAX 10000
#define MIN 1000


int main() { // Altere para int main()

    int controle1 = 1; // Altere para controle1 = 1
    while (controle1 == 1) {

        printf("Deseja realizar operações de ordenação ou a multiplicação de matriz por um escalar?\n");
        printf("1 - Ordenação\n");
        printf("2 - Multiplicação de matriz por um escalar\n");
        int opcao;
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                controle1 = 0;
                int controle12 = 1;
                while (controle12 ) {
                    printf("Desesja utilizar qual vetor de dados?\n");
                    printf("1 - Vetor MAX [10000]\n");
                    printf("2 - Vetor MIN [1000]\n");
                    int opcao_vetor;
                    scanf("%d", &opcao_vetor);
                    switch (opcao_vetor) {
                    case 1:
                        controle12 = 0;
                        int vetor_MAX[MAX];
                        preenche_vetore_dados_MAX(vetor_MAX);
                        imprime_vetor(vetor_MAX, MAX);
                        menu_ordenacao(vetor_MAX, MAX);
                        break;
                    
                    case 2:
                        controle12 = 0;
                        int vetor_MIN[MIN];
                        preenche_vetore_dados_MIN(vetor_MIN);
                        imprime_vetor(vetor_MIN, MIN);
                        menu_ordenacao(vetor_MIN, MIN);
                        break;

                    default:
                        printf("Opção inválida\n\n");
                        break;
                    }
                } break;

            break;
            case 2:
                controle1 = 0;
                processo_matriz();
                break;
    
            default:
                printf("Opção inválida\n\n");
                break;
        }

}

    return true; // Retorna 1 (true)
}


