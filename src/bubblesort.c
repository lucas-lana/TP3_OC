//Código original Retirado de: 
//https://github.com/fabricioandradesantos/estruturaDeDados/blob/master/Linguagem%20C/Ordenacao/bubbleSort.c

void bubbleSort(int *vetor,int tamanho) {
    int auxiliar=0;

    for (int atual = 0; atual < tamanho; atual++) {
        for (int proximo = 0; proximo < tamanho - 1; proximo++) {
            if (vetor[proximo] > vetor[proximo + 1]) {
                auxiliar = vetor[proximo];
                vetor[proximo] = vetor[proximo + 1];
                vetor[proximo + 1] = auxiliar;
            }
        }
    }
}

/*
A cada passagem pelo conjunto de dados, o Bubble Sort ele verifica se um elemento é maior que o próximo. 
Se for, eles trocam de lugar. Esse processo continua repetidamente, com o maior elemento "flutuando" para
o final da lista em cada passagem. Com o tempo, os elementos maiores se acumulam no final da lista, e a parte 
ainda não ordenada diminui. Embora seja fácil de entender e implementar, o Bubble Sort não é muito eficiente 
para grandes conjuntos de dados.

É geralmente usado para pequenos conjuntos de dados ou como exemplo didático de
algoritmo de ordenação.
*/