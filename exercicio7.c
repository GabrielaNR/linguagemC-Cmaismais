//Fa�a um algoritmo que construa uma matriz 10 por 10 de n�meros reais e depois de constru�da, colocar o conte�do de sua diagonal principal dentro de um vetor e depois do vetor montado, imprimir o conte�do do mesmo
#include <stdio.h>
#include <locale.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int main (void){
    setlocale(LC_ALL, "Portuguese");

//inicializando a fun��o rand
    srand(time(NULL));

//declarando a matriz
   int mat[LINHAS][COLUNAS];

//preenchendo a matriz com valores aleat�rios
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
           mat[i][j] = rand() % 100 + 1;  //entre 1 e 100
        }
    }

//para printar a matriz gerada
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", mat[i][j]);            //usamos i e j para linhas e colunas por conven��o. ao estudar matrizes em Geometria Anal�tica, essa � a nota��o utilizada.
        }
        printf("\n");
    }

//colocando o conte�do da diagonal principal em um vetor
    int diagonalPrincipal[10];      //o vetor possui 10 itens
    int index = 0;    //esse � o contador do index do vetor diagonalPrincipal

    for(int i = 0; i < LINHAS; i++){
            for(int j = 0; j < COLUNAS; j++){
                diagonalPrincipal[index] = mat[i][j];  //alimentando o vetor com os valores da matriz
                index++;
            }
    }
//imprimindo os itens do vetor diagonalPrincipal
    printf("\nElementos da diagonal principal: \n");
    for(int i = 0; i < LINHAS; i++){   //usando a constante linhas ao inv�s do valor 10
       printf("[%d] \t", diagonalPrincipal[i]);     //o \t serve para printar os itens em forma de tabela
    }
return 0;
}
