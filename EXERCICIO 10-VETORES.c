//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
   
   int i;
   float Notas[15],media;
    
   
   for(i=0;i<15;i++){
   printf("Digite a nota do aluno %d: ",i+1);
   scanf("%f",&Notas[i]);
    
   media += Notas[i];

   }
   printf("A media geral eh: %.1f",media/15.0);
   return 0;
}