//Faça um algoritmo que construa uma matriz 10 por 10 de números reais e depois de construída, colocar o conteúdo de sua diagonal principal dentro de um vetor e depois do vetor montado, imprimir o conteúdo do mesmo
#include <stdio.h>
#include <locale.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int main (void){
    setlocale(LC_ALL, "Portuguese");

//inicializando a função rand
    srand(time(NULL));

//declarando a matriz
   int mat[LINHAS][COLUNAS];

//preenchendo a matriz com valores aleatórios
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
           mat[i][j] = rand() % 100 + 1;  //entre 1 e 100
        }
    }

//para printar a matriz gerada
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", mat[i][j]);            //usamos i e j para linhas e colunas por convenção. ao estudar matrizes em Geometria Analítica, essa é a notação utilizada.
        }
        printf("\n");
    }

//colocando o conteúdo da diagonal principal em um vetor
    int diagonalPrincipal[10];      //o vetor possui 10 itens
    
    for(int i = 0; i < LINHAS; i++){
            for(int j = 0; j < COLUNAS; j++){
                diagonalPrincipal[i] = mat[i][i];  //alimentando o vetor com os valores da matriz
                index++;
            }
    }
//imprimindo os itens do vetor diagonalPrincipal
    printf("\nElementos da diagonal principal: \n");
    for(int i = 0; i < LINHAS; i++){   //usando a constante linhas ao invés do valor 10
       printf("[%d] \t", diagonalPrincipal[i]);     //o \t serve para printar os itens em forma de tabela
    }
return 0;
}
