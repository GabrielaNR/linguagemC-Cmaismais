//Fa�a um algoritmo que construa uma matriz de nome MAT de 10 linhas e 15 colunas contendo n�meros inteiros. Em seguida escreva a soma dos elementos de cada linha e de cada coluna de MAT.
#include <stdio.h>
#include <time.h>   //essa biblioteca garante que os n�meros randomizados sejam diferentes a cada execu��o do programa
#include <locale.h>

#define LINHAS 10
#define COLUNAS 15

int main (void){
    setlocale(LC_ALL, "Portuguese");

//inicializando a fun��o rand
    srand(time(NULL));

//declarando a matriz
   int mat[LINHAS][COLUNAS];

//preenchendo a matriz com valores aleat�rios
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
           mat[i][j] = rand() % 100 + 1;  //entre 1 e 100
        }
    }

//para printar a matriz gerada
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

//calculando a soma das linhas
    for (int i = 0; i < LINHAS; i++){
        int somaLinha = 0;   //inicializando a vari�vel
        for (int j = 0; j < COLUNAS; j++){
            somaLinha += mat[i][j];   //adicionando o valor dos elementos � vari�vel
        }
        printf("Soma da linha %d = %d\n", i + 1, somaLinha); //i + 1 para mostrar a linha come�ando do 1 ao inv�s do 0
    }
//calculando a soma das colunas
    for (int j = 0; j < COLUNAS; j++){
        int somaColuna = 0;   //inicializando a vari�vel
        for (int i = 0; i < LINHAS; i++){
            somaColuna += mat[i][j];   //adicionando o valor dos elementos � vari�vel
        }
        printf("Soma da coluna %d = %d\n", j + 1, somaColuna); //i + 1 para mostrar a coluna come�ando do 1 ao inv�s do 0
    }
    return 0;
}

