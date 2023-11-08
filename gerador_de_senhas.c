//Gerador de senha - ou ID - aleatório
//Este projeto surgiu da ideia de criar um código único para cada documento recebido por mim no meu trabalho
//Este código será analisado e reformulado conforme a evolução do meu aprendizado

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n;
void passGen(){
	int i = 0;
	int contador = 0; //esse contador é para as vezes que função rand vai rodar

	srand((time(NULL)));

	char numeros[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '9'};
	char letras_pequenas[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char letras_grandes[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char especiais[18] = {'_', '.', '-', '$', '%', '/', '&', '(', ')', '[', ']', '?', '!', '@', '=', '+', '*', '#'};
	char senha_ou_id [n]; //vetor para armazenar a senha gerada, com n indíces

	contador = rand()%4; //4 vetores de char

	for(i=0;i<n;i++){
		if(contador == 1){
			senha_ou_id[i] = numeros[rand()%10];
			contador = rand()%4;
		} else if (contador == 2){
			senha_ou_id[i] = letras_pequenas[rand()%26];
			contador = rand()%4;
		} else if (contador == 3){
			senha_ou_id[i] = letras_grandes[rand()%26];
			contador = rand()%4;
		} else{
			senha_ou_id[i] = especiais[rand()%18];
			contador = rand()%4;			
		}
	}
	printf("Sua nova senha/ID contendo numeros, letras e simbolos eh: ");
	for(i=0; i<n; i++){
		printf("%c", senha_ou_id[i]);
		}
}

void menu(){
	printf("|=================================|\n");
	printf("|-----Password \ ID Generator------|\n");
	printf("|=================================|\n");
	printf("Digite aqui um valor inteiro correspondente a quantidade de digitos da senha -> ");
	scanf("%d", &n);

}

int main(){
	menu();
	passGen();

return 0;

}
