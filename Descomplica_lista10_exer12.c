#include <stdio.h>
#include <stdlib.h>

int *nmr;

typedef struct 
{
    int codigo,qtd,preco;
    char nome;
}Produto;

Produto *p;

int main ()
{
    nmr= (int *)malloc(1*sizeof(int));
scanf("%d", nmr);

p=(Produto*)malloc((*nmr)*(sizeof(Produto)));


for (int i = 0; i < *nmr-1; i++)
{
    scanf("%d ",&p[i].preco);
    
}
for (int i = 0; i <= *nmr; i++)
{
    printf("%d ", p[i].preco);
}

}