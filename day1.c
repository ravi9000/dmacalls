#include<stdio.h>
#include<stdlib.h>
main()
{
char*ptr=malloc(1);
*ptr='a';
printf("%c",*ptr);
free(ptr);
}
