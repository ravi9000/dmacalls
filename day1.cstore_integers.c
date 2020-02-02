#include<stdio.h>
#include<stdlib.h>
main()
{
int*ptr=(int*)malloc(5*sizeof(int));
read(ptr,5);
display(ptr,5);
free(ptr);
}
void read(int*ptr,int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&ptr[i]);
}
void display(int*ptr, int n)
{
int i;
for(i=0;i<n;i++)
printf("%p-->%d\n",&ptr[i],ptr[i]);
}
