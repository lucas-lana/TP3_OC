//Código original Retirado de: 
//https://www.geeksforgeeks.org/c-program-for-radix-sort/

int getMax(int *arr, int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
 
void countSort(int *arr, int n, int exp) {
    int output[n];
    int i, count[10] = { 0 };
 
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
 
void radixsort(int *arr, int n) {
    int m = getMax(arr, n);
 
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

/*
O Radix Sort em vez de comparar elementos diretamente, ele os organiza com
base nos seus dígitos individuais. A ordenação começa pelo dígito menos significativo
e vai até o mais significativo. Para cada dígito, um algoritmo de ordenação estável,
como o Counting Sort, é usado para garantir que a ordem relativa dos elementos com
o mesmo dígito seja mantida. Após classificar por todos os dígitos, os números estarão
ordenados. O Radix Sort é particularmente eficiente para grandes conjuntos de números
inteiros.
*/