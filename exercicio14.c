//Desenvolva um algoritmo para fazer a multiplica��o de 2 matrizes de n�meros inteiros.

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main (void){
//aqui eu escolho a linguagem usada no c�digo e tbm inicializamos as primeiras vari�veis: os componentes das matrizes

    setlocale(LC_ALL, "Portuguese");
    int linhas1, linhas2, colunas1, colunas2;

//solicitando ao usu�rio que entre com os dados

    printf("Informe o n�mero de linhas da primeira matriz: ");
    scanf("%d", &linhas1);
    printf("Informe o n�mero de colunas da primeira matriz: ");
    scanf("%d", &colunas1);
    printf("Informe o n�mero de linhas da segunda matriz: ");
    scanf("%d", &linhas2);
    printf("Informe o n�mero de colunas da segunda matriz: ");
    scanf("%d", &colunas2);

//aqui verificamos se a entrada do usu�rio atende as condi��es para multiplica��o de matrizes

    if (colunas1 != linhas2) {
        printf("Erro: As matrizes n�o podem ser multiplicadas devido �s dimens�es incompat�veis.\n");
        printf("Para efetuar multiplica��o de matrizes, o n�mero de colunas da 2� deve ser igual ao n�mero de linhas da 1�.");
        return 1;    //return 1 com o erro
    }

//ap�s a verifica��o, inicializamos as matrizes com os dados fornecidos pelo usu�rio

    int matriz1[linhas1][colunas1];
    int matriz2[linhas2][colunas2];

//gerando os valores das matrizes 1 e 2 utilizando a fun��o rand

    srand(time(NULL));
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas1; j++) {
           matriz1[i][j] = rand() % 100 + 1;  //valores entre 1 e 100
        }
    }
//aqui usamos o +1 para gerar valores diferentes ao da fun��o anterior

    srand(time(NULL) + 1);
    for (int k = 0; k < linhas2; k++){
        for (int l = 0; l < colunas2; l++) {
           matriz2[k][l] = rand() % 100 + 1;  //valores entre 1 e 100
        }
    }

//vamos imprimir as matrizes geradas

     for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas1; j++) {
            printf("%d \t", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     for (int k = 0; k < linhas2; k++) {
        for (int l = 0; l < colunas2; l++) {
            printf("%d \t", matriz2[k][l]);
        }
        printf("\n");
    }
//aqui vamos inicializar a matriz que vai guardar o resultado da multiplica��o

    int resultado[linhas1][colunas2];   //linha da matriz 1 * coluna da matriz 2

    for (int m = 0; m < linhas1; m++){
        for(int n = 0; n < colunas2; n++){
            resultado[m][n] = 0;
        }
    }
//aqui efetuamos a multiplica��o das matrizes

    for (int i = 0; i < linhas1; i++){       //linha da primeira matriz
        for (int l = 0; l < colunas2; l++){     //coluna da segunda matriz
            for (int j = 0; j < colunas1; j++){    //percorrer as colunas da primeira matriz para percorrer todos os itens da linha
                resultado [i][l] += matriz1[i][j] * matriz2[j][l];     //armazendo os dados na matriz resultado
            }
        }
    }
//vamos imprimir a matriz com o resultado da multiplica��o

    printf("\nExibindo a matriz resultado da multiplica��o: \n");
    for (int i = 0; i < linhas1; i++){
        for (int l = 0; l < colunas2; l++){
            printf("%d\t", resultado[i][l]);
        }
        printf("\n");
    }

return 0;   //return 0 se estiver tudo ok com o programa
}
