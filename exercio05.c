//Desenvolva um algoritmo que preencha aleatoriamente um vetor de 20 posi��es com n�meros entre 1 a 30. Na sa�da do algoritmo, exiba o maior, menor, m�dia, desvio padr�o e vari�ncia dos valores.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define max 20      //define o m�ximo de posi��es do vetor

int main (void){
    setlocale(LC_ALL, "Portuguese");

//declarando o tamanho do vetor e o preenchendo
    int vetor[max];
    int soma = 0; //usaremos essa vari�vel no c�lculo da m�dia, somando os valores do vetor
    int maior = 1; //conforme pedido no enunciado, declaramos as variaveis com o maior e o menor valor
    int menor = 30;
    float media = 0;
    float variancia = 0;
    float desvioPadrao = 0;

//aqui usamos a fun��o rand para gerar numeros aleatorios. usamos 30 + 1 para excluir o 0
    for(int i = 0; i < max; i++){
        vetor[i] = rand()%30 + 1;
        soma += vetor[i];

//achando o menor e o maior valor do vetor, lembrando que as variaveis foram inicializadas no come�o do c�digo
    if (vetor[i] > maior){
        maior = vetor[i];
    }
    if (vetor[i] < menor) {
        menor = vetor[i];
    }
    }
//calculando a m�dia
    media = soma / max;

//calculando a vari�ncia. lembrando que a vari�ncia � obtida atrav�s da soma da soma dos quadrados da diferen�a entre cada valor do vetor e a m�dia aritm�tica, dividida pela quantidade de elementos observados.
    for (int i = 0; i < max; i++){
        variancia += pow(vetor[i] - media, 2); //quadrado da diferen�a entre cada valor no vetor e a m�dia
    }
    variancia /= max; //dividindo a soma dos quadrados das diferen�as pelo n�mero de elementos para calcular a vari�ncia

//calculando o desvio padr�o. lembrando que o desvio padr�o � obtido tirando a raiz quadrada da vari�ncia
    desvioPadrao = sqrt(variancia);


//printando um por um os valores pedidos
    printf("Aqui est� o vetor: [");
    for (int i = 0; i < max; i++){
        printf(" %d ", vetor[i]);
        }
    printf("]");
    printf("\nO maior n�mero do vetor � %d \n", maior);
    printf("O menor n�mero do vetor � %d \n", menor);
    printf("A m�dia � %.2f \n", media);
    printf("A vari�ncia � %.2f \n", variancia);
    printf("O desvio padr�o � %.2f \n", desvioPadrao);

return 0;

}
