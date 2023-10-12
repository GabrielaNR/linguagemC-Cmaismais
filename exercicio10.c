//Dada uma matriz de inteiros Amxn, verificar se existem elementos repetidos em A.
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main (void){
    setlocale(LC_ALL, "Portuguese");

//pedindo ao usuário para informar o número de linhas e colunas da matriz
    int linhas;
    printf("Informe o número de linhas da matriz: ");
    scanf("%d", &linhas);

    int colunas;
    printf("Informe o número de colunas da matriz: ");
    scanf("%d", &colunas);

//declarando a matriz
    int matriz[linhas][colunas];

//gerando aleatoriamente o conteudo da matriz usando a função rand
    srand(time(NULL));
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
           matriz[i][j] = rand() % 100 + 1;  //valores entre 1 e 100
        }
    }
//imprimindo a matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

//verificando se existem itens repetidos
    int repetidosLista [linhas * colunas];
    int repetidos = 0;
    int verificado = 0;
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            int verificado = matriz[i][j];
            for (int k = i; k < linhas; k++){
                int l;
// Se estivermos verificando a mesma linha, começamos a partir da coluna "j+1" para evitar comparações repetidas
                if (k == i) {
                    l = j + 1;
                } else {
                    l = 0;
                }
                for (; l < colunas; l++) {
                    if (verificado == matriz[k][l]) {
                        repetidosLista[repetidos] = verificado;
                        repetidos++;
                    }
                }
            }
        }
    }
    printf("Número de elementos repetidos na matriz: %d\n", repetidos);
    printf("Itens repetidos na matriz: ");
    for (int i = 0; i < repetidos; i++) {
        printf("%d ", repetidosLista[i]);
    }
    printf("\n");

return 0;
}
