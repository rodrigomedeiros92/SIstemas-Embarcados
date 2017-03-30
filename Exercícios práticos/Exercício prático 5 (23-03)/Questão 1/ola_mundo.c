#include <unistd.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	int fp;
	fp = open("/home/rodrigo/Desktop/SIstemas-Embarcados/Exercícios práticos/Exercício prático 5 23-03/Questão 1/ola_mundo.txt",O_RDWR | O_CREAT);
	write(fp,"Olá mundoo!",12);
	close(fp) ;
   return 0;
}
