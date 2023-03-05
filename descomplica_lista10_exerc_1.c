#include <stdio.h>
#include <stdlib.h>

int *p,nmrelementos;

int main()
{
scanf("%d", &nmrelementos);

p= (int *)(malloc(nmrelementos*sizeof(int)));

printf("insira os valores:");

for (int i = 0; i < nmrelementos; i++)
{
scanf("%d",&p[i]);
//printf("%d",p[i]);
}
printf("%d",p[1]);
printf("%d",p[2]);
printf("\n");
free(p);
}