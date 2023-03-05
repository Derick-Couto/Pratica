#include <stdio.h>

int nmrs[5]={0,0,0,0,0}, resto, i,j=0;

int main()
{

for ( i = 1; nmrs[4] == 0; i++)
{
    resto=i%3;
    if (resto == 0)
    {
     nmrs[j] = i;  
    printf("%d ",nmrs[j]);
    j++;
    } else{
        
    }
    
}

}