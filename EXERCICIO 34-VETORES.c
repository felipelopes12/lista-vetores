//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 10
int main(){
    int valor, existente, vetor[MAX]={0}, i = 0, n;
        while(i < MAX){
          
            printf("Valor: ");
       
        scanf("%d", &valor);
   
    for(n = existe = 0; n < i; n++)
           
            if(vetor[n] == valor) existe = 1;
        
        if(existente)
        
        printf("o valor %d ja existe\n", valor);

    else
            vetor[i++] = valor;
             }
        printf("\nVetor:\n\n");


     for(i = 0; i < MAX; i++)
            printf("%d\n", vetor[i]);


return 0;
            }
