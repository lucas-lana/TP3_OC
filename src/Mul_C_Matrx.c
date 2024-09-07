

void mul_matriz_coluna(int n, int m, int constante, int Matriz[n][m]){
    //Linhas = n
    //Colunas = m
    for(int coluna = 0; coluna < m; coluna++){
        for(int linha = 0; linha < n; linha++){
            Matriz[linha][coluna] = Matriz[linha][coluna] * constante;
        }
    }
}

void mul_matriz_linha(int n, int m, int constante, int Matriz[n][m]){
    //Linhas = n
    //Colunas = m
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < m; coluna++){
            Matriz[linha][coluna] = Matriz[linha][coluna] * constante;
        }
    }
}

void print_matrix(int n, int m, int Matrix[n][m]){
    for(int linha = 0; linha < n; linha++){
        printf("[");
        for(int coluna = 0; coluna < m; coluna++){
            if (coluna == 0){
                printf("%d", Matrix[linha][coluna]);
            }
            printf(", %d", Matrix[linha][coluna]);
        }
        printf("]\n");
    }
    printf("\n\n");
}

void preenche_matrix(int n, int m, int Matrix[n][m]){
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < m; coluna++){
            Matrix[linha][coluna] = rand() % 64;
        }
    }
}

void copia_matrix(int n, int m, int Matrix[n][m], int Matrix2[n][m]){
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < m; coluna++){
            Matrix2[linha][coluna] = Matrix[linha][coluna];
        }
    }
}

void menu_matriz(int n, int m, int Matrix[n][m]){
    int opcao;
    int constante;
    int controle = 1;

    printf("Digite o valor do esacalar: ");
    scanf("%d", &constante);

    while(controle) {
        printf("Escolha a operação que deseja realizar:\n");
        printf("1 - Multiplicar linha a linha por um escalar\n");
        printf("2 - Multiplicar coluna a coluna por um escalar\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                controle = 0;
                mul_matriz_linha(n, m, constante, Matrix);
                print_matrix(n, m, Matrix);
                break;
            case 2:
                controle = 0;
                mul_matriz_coluna(n, m, constante, Matrix);
                print_matrix(n, m, Matrix);
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
    }
}

void processo_matriz(){
    printf("\n");
    int n, m;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &n);    
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &m);
    int Matrix[n][m];

    preenche_matrix(n, m, Matrix);
    print_matrix(n, m, Matrix);
    
    menu_matriz(n, m, Matrix);
}