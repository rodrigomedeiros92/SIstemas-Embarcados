#include <stdio.h>
#include "num_caracs.h"

int num_caracs(char *str)
{

int total=0;
while( str[total] != '\0') //laço ate o final da string
total++;


return total;
}

