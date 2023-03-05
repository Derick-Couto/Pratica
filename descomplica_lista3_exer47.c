#include <stdio.h>

int escolha,n1,n2;

void menu();
void adicao();
void subtracao();
void multiplicacao();
void divisao();


void menu()
{
    printf("faça sua escolha:\n1- adicao\n2-subtracao\n3-multiplicacao\n4-divisao\n...:");
    scanf("%d", &escolha);
switch (escolha)
{
case 1:
    adicao(n1,n2);
    break;
case 2:
    subtracao(n1,n2);
    break;
case 3:
    multiplicacao(n1,n2);
    break;
case 4:
    divisao(n1,n2);
    break;
default:
    break;
}
}

void adicao (int n1, int n2)
{
int result=n1+n2;
printf("::::%d", result);
menu();
}

void subtracao (int n1, int n2)
{
int result=n1-n2;
printf("::::%d", result);
menu();
}

void multiplicacao (int n1, int n2)
{
int result=n1*n2;
printf("::::%d", result);
menu();
}

void divisao (int n1, int n2)
{
int result=n1/n2;
printf("::::%d", result);
menu();
}

int main()
{
printf("insira dois numeros:");
scanf("%d %d",&n1,&n2);
menu();

}