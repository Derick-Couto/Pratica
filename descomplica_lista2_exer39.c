#include <stdio.h>

int salario, tservico, bonus;

int main(){

printf("insira seu salário:");
scanf("%d",&salario);

printf("\n insira seu tempo de serviço:");
scanf("%d",&tservico);


if (salario<=500){
    salario+=salario*0.25;
}else if (salario>500 && salario<1001){
salario+=salario*0.20;
}else if (salario>1000 && salario<1501){
salario+=salario*0.15;
}else if (salario>1500 && salario<2001){
salario+=salario*0.10;
}else {
salario+=0;
}

if (tservico<1){
    bonus+=0;
}else if (tservico>=1 && tservico<4){
bonus+=500;
}else if (tservico>=4 && tservico<7){
bonus+=200;
}else if (tservico>=7 && tservico<11){
bonus+=300;
}else {
bonus+=500;
}

printf("\n Seu reajuste de salário ficou: R$ %d + seu bonus será de R$ %d\n Totalizando:R$ %d",salario,bonus,(salario+bonus));

}