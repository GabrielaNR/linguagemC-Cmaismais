//Faça um algoritmo que tenha como entrada uma matriz A[10][10] e tem na sua saída a soma dos elementos acima da diagonal principal.
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define LINHAS 10
#define COLUNAS 10

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
//extraindo os itens da diagonal acima
    int diagonalAcima[10];
    for(int i = 0; i < LINHAS; i++){
        for (int j = i + 1; j < COLUNAS; j++){
                diagonalAcima[i] = matriz[i][j];
                i++;
        }
    }
//imprimindo os itens do vetor diagonalAcima
    printf("\nElementos da diagonal acima da principal: \n");
    for(int i = 0; i < LINHAS - 1; i++){
            printf("[%d] \t", diagonalAcima[i]);
    }
//agora somando os elementos da diagonalAcima e imprimindo o resultado
    int somaAcima = 0;
    for (int i = 0; i < LINHAS; i++){
        somaAcima += diagonalAcima[i];
    }
    printf("\nA soma dos elementos da diagonal acima da diagonal principal é: %d.", somaAcima);

return 0;
}
