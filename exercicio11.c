//Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento de uma linha onde se encontra o maior elemento da matriz. Faça um algoritmo que receba uma matriz A[10][10] e retorna o seu elemento minimax, juntamente com a sua posição.
#include <stdio.h>
#include <time.h>
#include <locale.h>
#define LINHAS 10
#define COLUNAS 10

int main (void){
//DEFININDO A LINGUAGEM, A MATRIZ E SEU CONTEÚDO
    setlocale(LC_ALL, "Portuguese");
    int matriz [LINHAS][COLUNAS];
    srand(time(NULL));
     for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
           matriz[i][j] = rand() % 100 + 1;
        }
    }
//PRINTANDO A MATRIZ
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
//ACHANDO O MAIOR ELEMENTO
    int maiorElemento = 0;
    int linhaDoMaiorElemento = 0;
    int colunaDoMaiorElemento = 0;
    for (int i = 0; i < LINHAS; i ++){
        for (int j = 0; j < COLUNAS; j++){
            if (matriz[i][j] > maiorElemento){
                maiorElemento = matriz[i][j];
                linhaDoMaiorElemento = i;
                colunaDoMaiorElemento = j;
            }
        }
    }
    printf("O maior elemento é [%d]. Ele está na %dª linha e %dª coluna.\n", maiorElemento, linhaDoMaiorElemento + 1, colunaDoMaiorElemento + 1);
//achando o minimax
    int minimax = matriz[linhaDoMaiorElemento - 1][0]; //supondo que o menor esteja na primeira coluna
    int colunaDoMinimax = 0;
    for (int j = 0; j < COLUNAS; j++){
        if (matriz[linhaDoMaiorElemento][j] < minimax){
            minimax = matriz[linhaDoMaiorElemento][j];
            colunaDoMinimax = j;
        }
    }
    printf("O elemento minimax é [%d]. Ele está na %dª coluna.", minimax, colunaDoMinimax + 1);

return 0;
}





