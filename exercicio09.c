//Faça um algoritmo que defina uma matriz A[6][6] de inteiros e retorne a soma dos elementos da sua diagonal principal e da sua diagonal secundária.
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define LINHAS 6
#define COLUNAS 6

int main (void){
    setlocale(LC_ALL, "Portuguese");

    int matriz [LINHAS][COLUNAS];
//gerando os números da matriz com a função rand
    srand(time(NULL));
     for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
           matriz[i][j] = rand() % 100 + 1;  //entre 1 e 100
        }
    }
//printando a matriz
      for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

//extraindo os itens da diagonal principal
    int diagonalPrincipal[6];
    for(int i = 0; i < LINHAS; i++){
                diagonalPrincipal[i] = matriz[i][i];
                i++;
    }
//imprimindo os itens do vetor diagonalPrincipal
    printf("\nElementos da diagonal principal: \n");
    for(int i = 0; i < LINHAS; i++){
       printf("[%d] \t", diagonalPrincipal[i]);
    }
//extraindo os itens da diagonal secundária
    int diagonalSecundaria[6];
    for (int i = 0; i < LINHAS; i++){
            diagonalSecundaria[i] = matriz[i][LINHAS - 1 - i];
        }
//imprimindo os itens do vetor diagonalSecundaria
    printf("\nElementos da diagonal secundária: \n");
    for(int i = 0; i < LINHAS; i++){
       printf("[%d] \t", diagonalSecundaria[i]);
    }
//somando os itens da diagonal principal
    int somaPrincipal = 0;
    for (int i = 0; i < LINHAS; i++){
        somaPrincipal += diagonalPrincipal[i];
    }
//somando os itens da diagonal secundária
    int somaSecundaria = 0;
    for (int i = 0; i < LINHAS; i++){
        somaSecundaria += diagonalSecundaria[i];
    }
//somando as duas somas kkk
    int somaTudo = somaPrincipal + somaSecundaria;

//imprimindo
    printf("Soma da diagonal principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundária: %d\n", somaSecundaria);
    printf("Soma de ambas diagonais: %d\n", somaTudo);

return 0;
}
