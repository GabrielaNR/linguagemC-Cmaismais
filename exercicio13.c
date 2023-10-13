//Faça um algoritmo que recebe uma matriz A[8][8] de inteiros e retorne a posição do maior elemento da sua diagonal principal. Admita que todos os elementos de A são distintos.
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define LINHAS 8
#define COLUNAS 8

int main (void){
    setlocale(LC_ALL, "Portuguese");

//declarando a matriz
   int matriz[LINHAS][COLUNAS];
//preenchendo a matriz com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
           matriz[i][j] = rand() % 100 + 1;  //entre 1 e 100
        }
    }
//para printar a matriz gerada
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
//extraindo os itens da diagonal principal
    int diagonalPrincipal[8];
    for(int i = 0; i < LINHAS; i++){
                diagonalPrincipal[i] = matriz[i][i];
    }
//imprimindo os itens do vetor diagonalPrincipal
    printf("\nElementos da diagonal principal: \n");
    for(int i = 0; i < LINHAS; i++){
       printf("[%d] \t", diagonalPrincipal[i]);
    }
//achando o maior valor da diagonal principal
    int maiorValor = 0;
    int posicaoMaiorValor = 0;

    for (int i = 0; i < LINHAS; i++){
        if(diagonalPrincipal[i] > maiorValor){
            maiorValor = diagonalPrincipal[i];
            posicaoMaiorValor = i;
        }
    }
    printf("\nO maior valor é %d e ele está na %dª posição.", maiorValor, posicaoMaiorValor + 1);

return 0;
}
