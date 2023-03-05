#include <stdio.h>

int i,n,count=1,t=1;


int main()
{
printf("insira um nmr:");
scanf("%d", &n);


for ( i = 1; i < n; i++)
{
    
printf("%d ",i);

if (count>=t)
{
   printf("\n");
   t++;
   count=0;
}else{}

count++;
}
}