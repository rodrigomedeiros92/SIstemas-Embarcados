#include <unistd.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	int fp;
	fp = open("ola_mundo.txt",O_RDWR | O_CREAT);
	write(fp,"Ola mundo!\n",12);
	close(fp) ;
   return 0;
}
