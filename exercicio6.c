//Faça um algoritmo que construa uma matriz de nome MAT de 10 linhas e 15 colunas contendo números inteiros. Em seguida escreva a soma dos elementos de cada linha e de cada coluna de MAT.
#include <stdio.h>
#include <time.h>   //essa biblioteca garante que os números randomizados sejam diferentes a cada execução do programa
#include <locale.h>

#define LINHAS 10
#define COLUNAS 15

int main (void){
    setlocale(LC_ALL, "Portuguese");

//inicializando a função rand
    srand(time(NULL));

//declarando a matriz
   int mat[LINHAS][COLUNAS];

//preenchendo a matriz com valores aleatórios
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
        int somaLinha = 0;   //inicializando a variável
        for (int j = 0; j < COLUNAS; j++){
            somaLinha += mat[i][j];   //adicionando o valor dos elementos à variável
        }
        printf("Soma da linha %d = %d\n", i + 1, somaLinha); //i + 1 para mostrar a linha começando do 1 ao invés do 0
    }
//calculando a soma das colunas
    for (int j = 0; j < COLUNAS; j++){
        int somaColuna = 0;   //inicializando a variável
        for (int i = 0; i < LINHAS; i++){
            somaColuna += mat[i][j];   //adicionando o valor dos elementos à variável
        }
        printf("Soma da coluna %d = %d\n", j + 1, somaColuna); //i + 1 para mostrar a coluna começando do 1 ao invés do 0
    }
    return 0;
}

