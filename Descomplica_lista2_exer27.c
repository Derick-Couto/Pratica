#include <stdio.h>

int idade, *p1=&idade;

void tabela();


void tabela (int idade)
{
    if (idade>4 && idade<8 )

    {
        idade=1;
            }else

    if (idade>7 && idade<11)
    {
    idade=2;
    }else
    if (idade>10 && idade<14)
    {
    idade=3;
    }else if (idade>13 && idade<18)
    {
   idade=4;
    }else
    idade=5;

switch (idade)
{
    case (1 ):
        printf("infantil A");
        break;
    case (2 ):
        printf("infantil b");
        break;
    case (3 ):
        printf("Juvenil A");
        break;
    case (4 ):
        printf("Juvenil B");
        break;
    case ( 5 ):
        printf("Senior");
        break;

default:
    break;
}
}

int main   ()
{

scanf("%d",&idade);
tabela(*p1);

}
