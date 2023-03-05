#include <stdio.h>
#include <stdlib.h>

int nmrelementos, *p,*r;


int main (void)
{

printf("insira o numeor de elementos:");
scanf("%d", &nmrelementos);

p=(int *)(malloc(nmrelementos*sizeof(int)));
r=(int *)(malloc(1*sizeof(int)));

for (int i = 0; i < nmrelementos; i++)
{
    scanf("%d", &p[i]);
    printf("%d",p[i]);
}

printf("\nnumeros pares:");
for (int i = 0; i < nmrelementos; i++)
{
    *r=p[i]%2;
    if (*r==0)
    {
    printf("%d ",p[i]);
    }else {}
}

printf("\nnumeros impares:");
for (int i = 0; i < nmrelementos; i++)
{
    *r=p[i]%2;
    if (*r!=0)
    {
    printf("%d ",p[i]);
    }else {}
}
free(p);
free(r);
}