#include <stdio.h>
float n1,n2;

int main ()
{

scanf("%f",&n1);
scanf("%f",&n2);

if ((n1 < 0 || n1 >10) || (n2 < 0 || n2 >10)){
printf ("notas invalidas");

}else
printf("%f",((n1+n2)/2));


}