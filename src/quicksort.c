// Código Retirado de: http://www.programasprontos.com/algoritmos-de-ordenacao/algortimo-quick-sort/

void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}

/*
O Quick Sort é um dos algoritmos de ordenação mais utilizados devido à sua eficiência prática.
Funciona escolhendo um elemento como pivô e particionando a lista em duas: uma com
elementos menores que o pivô e outra com elementos maiores. O pivô é então colocado na sua posição
correta. Em seguida, o Quick Sort é recursivamente aplicado nas sublistas resultantes. A escolha
do pivô pode afetar significativamente o desempenho do algoritmo. Acaba se tornando-o mais eficiente
para a maioria das situações.
*/