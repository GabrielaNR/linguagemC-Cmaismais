//Fa�a um programa que gere uma matriz transposta (Matriz transposta � toda a matriz onde s�o trocadas as linhas pelas colunas, ou vice-versa)
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main (void){
    setlocale(LC_ALL, "Portuguese");
//pedindo ao usu�rio para informar o n�mero de linhas e colunas da matriz
    int linhas;
    printf("Informe o n�mero de linhas da matriz: ");
    scanf("%d", &linhas);

    int colunas;
    printf("Informe o n�mero de colunas da matriz: ");
    scanf("%d", &colunas);

//declarando a matriz e a matriz transposta
    int matriz[linhas][colunas];
    int transposta [colunas][linhas];

//gerando aleatoriamente o conteudo da matriz usando a fun��o rand
    srand(time(NULL));
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
           matriz[i][j] = rand() % 100 + 1;  //valores entre 1 e 100
        }
    }
//agora vamos gerar a matriz transposta
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
           transposta[j][i] = matriz [i][j];
        }
    }
//imprimindo a matriz original
    printf("\nMatriz Original:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
//agora imprimindo a sua transposta
    printf("\nMatriz Transposta:\n");
    for (int j = 0; j < colunas; j++) {
        for (int i = 0; i < linhas; i++) {
            printf("%d \t", transposta[j][i]);
        }
        printf("\n");
    }
return 0;
}


