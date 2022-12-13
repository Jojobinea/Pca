#include <stdio.h>
int main(){
    
	char nome[30];
	int idade;
	char genero;
	
	
	printf("Informe o nome: ");
	scanf("%s", &nome);
	printf("Informe a idade: ");z
	scanf("%i", &idade);
	printf("Informe o genero (F/M): ");
	scanf("%s", &genero);
	
	if(genero == 'F' || genero == 'f'){
		printf("Nome: %s", nome);
		printf("\nIdade: %i", idade);
		printf("\nGenero: %c, é mulher", genero);
	}else{
		printf("Nome: %s", nome);
		printf("\nIdade: %i", idade);
		printf("\nGenero: %c, nao é mulher", genero);
	}
	return 0;
}