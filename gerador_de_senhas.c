//Gerador de senha - ou ID - aleatório
//Este projeto surgiu da ideia de criar um código único para cada documento recebido por mim no meu trabalho
//Este código será analisado e reformulado conforme a evolução do meu aprendizado

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMEROS 10                       //declaração das constantes para os arrays de caracteres
#define LETRAS_PEQUENAS 26
#define LETRAS_GRANDES 26
#define ESPECIAIS 18

void passGen(int n) {    //declarando a função PasswordGenerator
    int i = 0;           //declarando os contadores      
    int contador = 0;

    srand((time(NULL)));     //iniciando a função rand

    //aqui decidi usar um array para cada possibilidade de caractere. possivelmente há um modo mais prático, mas este ficará para a versão 0.3
    char numeros[NUMEROS] = {'0', '1', '2', '3', '4', '5', '6', '7', '9'};
    char letras_pequenas[LETRAS_PEQUENAS] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char letras_grandes[LETRAS_GRANDES] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char especiais[ESPECIAIS] = {'_', '.', '-', '$', '%', '/', '&', '(', ')', '[', ']', '?', '!', '@', '=', '+', '*', '#'};

    char senha_ou_id[n];       //vetor que aramazenará os caracteres da senha gerada

    contador = rand() % 4;    //inicializando o contador com a função rand, são 4 tipos diferentes de caracteres para serem randomizados

    for (i = 0; i < n; i++) {
        if (contador == 1) {
            senha_ou_id[i] = numeros[rand() % NUMEROS];
            contador = rand() % 4;
        } else if (contador == 2) {
            senha_ou_id[i] = letras_pequenas[rand() % LETRAS_PEQUENAS];
            contador = rand() % 4;
        } else if (contador == 3) {
            senha_ou_id[i] = letras_grandes[rand() % LETRAS_GRANDES];
            contador = rand() % 4;
        } else {
            senha_ou_id[i] = especiais[rand() % ESPECIAIS];
            contador = rand() % 4;
        }
    }

    printf("Sua nova senha/ID contendo numeros, letras e simbolos eh: ");    //um loop for para imprimir a senha gerada
    for (i = 0; i < n; i++) {
        printf("%c", senha_ou_id[i]);
    }
}

int menu() {   //função para exibir o menu
    int n;     //aqui declaramos o n
    printf("|=================================|\n");
    printf("|-----Password \\ ID Generator-----|\n");
    printf("|=================================|\n");
    printf("|===========Versao 0.2============|\n");
    printf("Digite aqui um valor inteiro correspondente a quantidade de digitos da senha -> ");   //aqui o usuário diz o tamanho em caracteres da senha desejada
    scanf("%d", &n);

    return n;     //return
}

int main() {           //deixamos a função main com o papel de chamar as outras funções de trabalho
    int n = menu();    //aqui usamos o int n, dispensando aquela variável global
    passGen(n);

    return 0;
}
