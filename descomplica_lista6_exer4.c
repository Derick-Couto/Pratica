#include <stdio.h>

int maiorp1=0,mn1,mmg=0,pmmg,menormg,pmenormg;
typedef struct 
{
    int matricula,p1,p2,p3,mediageral;
    char nome[];
}Aluno;

Aluno Alunos[5];

int main()
{

for (int i = 0; i < 5; i++)
{
  printf("insira o nome do Aluno %d:", i+1);
    scanf("%s",Alunos[i].nome);
    printf("\ninsira a nota 1, 2 e 3 do aluno%d:",i+1);
    scanf("%d %d %d",&Alunos[i].p1,&Alunos[i].p2,&Alunos[i].p3);
    Alunos[i].mediageral=(Alunos[i].p1+Alunos[i].p2+Alunos[i].p3)/3;
}


for (int i = 0; i < 5; i++)
{
   if (maiorp1<Alunos[i].p1)
   {
    maiorp1=Alunos[i].p1;
    mn1=i;
   }else{}
   if (mmg<Alunos[i].mediageral)
   {
   mmg=Alunos[i].mediageral;
   pmmg=i;
   }else
   if (mmg>Alunos[i].mediageral)
   {
   menormg=Alunos[i].mediageral;
   pmenormg=i;
   }
   
   
}

printf("%s tem a maior nota p1 que é: %d",Alunos[mn1].nome,maiorp1);
printf("\n");
printf("%s tem a maior media geral que é: %d",Alunos[pmmg].nome,mmg);
printf("\n");
printf("%s tem a menor media geral que é: %d",Alunos[pmenormg].nome,menormg);
}