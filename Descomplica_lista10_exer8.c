#include <stdio.h>
#include <stdlib.h>

int *v1;

int main()
{


v1= calloc(1500,sizeof(int));

for (int i = 0; i < 1500; i++)
{
    v1[i]=i;
 printf("%d ",v1[i]);
}

free(v1);
}