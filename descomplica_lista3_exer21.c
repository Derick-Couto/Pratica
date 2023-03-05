#include <stdio.h>

int n1,n2, resto,soma=0;
double mult=1;

int main () 
{

scanf("%d %d",&n1,&n2);


for (int i=n1; i>=n1 && i<=n2; i++){

resto=i%2;
if (resto ==0){
soma=soma+i;
} else{
mult=mult*i;
}
}

printf("%d ", soma);
printf("%lf ", mult);


}