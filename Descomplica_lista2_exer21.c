#include <stdio.h>

double n1,n2,result;
double *p1=&n1,*p2=&n2;
int escolha, *p3=&escolha;

void menu();

void menu ()
{
printf("\nEscolha a opcao:\n1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador ao pode ser zero).\n");
scanf("%d",&escolha);

switch (escolha)
{
    case 1:
    result = *p1+*p2;
        printf("%.4lf",result);
        menu();
        break;
    case 2:
        if (*p1>*p2)
        {
           printf("%.4lf",(*p1-*p2));
            menu();
           break;
        }else
        printf("%.4lf",(*p2-*p1));
         menu();
        break;
    case 3:
        printf("%.4lf",((*p1)*(*p2)));
         menu( );
        break;
    case 4:
        printf("%.4lf",((*p1)/(*p2)));
         menu();
        break;
    default:
   printf("\nopcao invalida");
   break;
}
}

int main ()
{

printf("insira dois numeros:");
scanf("%lf",&n1);
scanf("%lf",&n2);

    menu ();
}