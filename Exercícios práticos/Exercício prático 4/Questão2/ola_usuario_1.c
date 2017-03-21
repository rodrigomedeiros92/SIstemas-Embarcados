#include <stdio.h>

int main(void)
{
	char url[]="ola_usuario_1.txt";
	char nome[100];	
	int idade;
	FILE *arq;
	
	arq = fopen(url, "w");
	
	printf("Digite o seu nome: ");
	scanf("%s",nome);
	fprintf(arq,"Nome:%s \n",nome);

	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	fprintf(arq,"Idade:%d anos \n",idade);
	
	fclose(arq);
	
	return 0;
}
