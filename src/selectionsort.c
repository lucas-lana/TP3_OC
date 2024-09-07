//Código original Retirado de: 
//https://www.revista-programar.info/artigos/ordenacao-generica-em-c/

void selection_Sort(int *vetor, int n) {
   for(int i = 0; i < n - 1; i++) {
        int menor = i;
        for(int j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[menor]) menor = j;
        }
        int aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
   }
}

/*
o Selection Sort é um algoritmo que organiza uma lista encontrando o menor
elemento e colocando-o na primeira posição. Após cada iteração, o algoritmo
ignora a parte já ordenada da lista e continua a buscar o menor elemento nos
elementos restantes, repetindo o processo até que a lista esteja totalmente
ordenada. Este método se destaca por realizar um número limitado de trocas, o que pode ser útil
em situações onde esse critério é relevante. Contudo, devido à sua complexidade
de tempo, ele não é recomendado para listas grandes e é mais comumente usado em
pequenos conjuntos de dados ou em situações onde a memória limitada é uma preocupação.
*/