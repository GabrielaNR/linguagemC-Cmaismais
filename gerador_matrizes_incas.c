//gerando uma matriz inca (ou caracol) com a dimensão fornecida pelo usuário
//matrizes incas são sempre quadradas, ou seja, m = n; linhas = colunas
//uma matriz é inca se partindo do canto superior esquerdo da matriz, no sentido horário, em espiral, a posição seguinte na ordem é o inteiro consecutivo da posição anterior.

#include <stdio.h>

void criarMatrizInca(int n){   
    int matriz[n][n];  //declarando a matriz com a dimensão n fornecida pelo usuário
    int valorIndiceMatriz = 1; //primeiro item da matriz
    int inicioLinha = 0; //declarando os contadores que os loops percorrerão para o preenchimento da matriz
    int inicioColuna = 0;
    int fimLinha = n - 1;
    int fimColuna = n - 1;
    
    while(inicioLinha <= fimLinha && inicioColuna <= fimColuna){  //loop para percorrer as linhas e colunas
        
    //preenchendo a primeira linha
    for (int i = inicioColuna; i <= fimColuna; ++i) {  //incrementa o i antes de passar para a próxima verificação
            matriz[inicioLinha][i] = valorIndiceMatriz++;
        }
        inicioLinha++;
    
    //preenchendo a última coluna
    for (int i = inicioLinha; i <= fimLinha; ++i) {
            matriz[i][fimColuna] = valorIndiceMatriz++;
        }
        fimColuna--;  //as colunas são preenchidas de "trás pra frente"
    
    //preenchendo a última linha
    if (inicioLinha <= fimLinha) {
            for (int i = fimColuna; i >= inicioColuna; --i) {
                matriz[fimLinha][i] = valorIndiceMatriz++;
            }
            fimLinha--;
        }
        
    //preenchendo a primeira coluna (a primeira coluna da matriz é a última a ser preenchida)
    if (inicioColuna <= fimColuna) {
            for (int i = fimLinha; i >= inicioLinha; --i) {
                matriz[i][inicioColuna] = valorIndiceMatriz++;
            }
            inicioColuna++;
        }
    }

    //imprimindo a matriz gerada
    
    printf("Matriz inca de dimensão %d x %d:\n", n, n);   //matriz inca de dimensão n fornecida pelo usuário
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t ", matriz[i][j]);
        }
        printf("\n");
    }
}


int main(){
    
    int dimensao;
    
    do{  //loop infinito até que o usuário digite um valor aceitável ou escolha sair usando break
    printf("Digite o valor da dimensão da matriz quadrada: ");
    scanf("%d", &dimensao);
    
    if (dimensao <= 20) { //verifica se o valor é menor ou igual a 20
        criarMatrizInca(dimensao); //se for menor ou igual a 20, gera a matriz
        break; //sai do loop
        } 
    else {
        printf("Valor inválido! Digite um número de 1 a 20!\n"); //loop continua rodando até o usuário inserir um valor válido
        }
    } while (1); //while true

    return 0;
}

