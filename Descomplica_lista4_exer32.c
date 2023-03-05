#include <stdio.h>

int v1[5],v2[5],temp,intersec[5],uniao[10],k=0,l=0,count=0,z=6;



int main ()
{

for (int i = 0; i < 5; i++)
{
   scanf("%d", &v1[i]);
}
for (int i = 0; i < 5; i++)
{
  scanf("%d", &v2[i]);

  printf("%d|", v1[i]+v2[i]);
}

 printf("\nmult:");

for (int i = 0; i < 5; i++)
{
    printf("%d|", v1[i]*v2[i]);
}


for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
       if (v1[i] == v2[j])
       {
        intersec[k]=v1[i];
        k++;
       }else{}
    }
    
}
for (int i = 0; i < 5; i++)
{
    uniao[i]=v1[i];
}
for (int i = 0; i < 5; i++)
{
    count=0;
    for (int j = 0; j < 5; j++)
    {
       if (v2[i]==v1[j])
       {
       count++;
       }else{}
       if (count==0)
       {
        uniao[z]=v2[i];
        z++;
       }
       
    }   
}

printf("\nintersec:");

for (int i = 0; intersec[i] <= k; i++)
{
    printf("%d|",intersec[i]);
}
printf("\nuniao:");

for (int  i = 0; uniao[i] <= z; i++)
{
    printf("%d|",uniao[i]);
}




}