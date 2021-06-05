//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(){
int vet1[10], vet2[10],vet3[20],i,aux1,aux2;

for(i = 0;i < 10;i++){
    printf("Digite os componentes do vetor posicao 1 [%d]:",i);
   scanf("%d",&vet1[i]);

}

for(i = 0; i < 10;i++){
 printf("Digite os componentes do vetor posicao 2 [%d]:",i);
   scanf("%d",&vet2[i]);
}

aux1=0;

aux2=0;

for(i=0; i < 20; i++)

{                                                                         
    if(i%2==0)
    {

      vet3[i] = vet1[aux1];                       

      aux1++;

    }

    else

    {        

      vet3[i] = vet2[aux2]; 

      aux2++;

    }   

}   

printf("\n");

for(i=0; i< 20; i++)

{

  printf(" \t%d  ",vet3[i]);

}

return 0;

}

