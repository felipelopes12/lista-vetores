//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6
int main()
{
    setlocale(LC_ALL, "");
    int vetor[TAM];

         
    for(int i=0; i<TAM; i++)
    {
        printf("Digite o valor do vetor %d :", i);
        scanf("%d", &vetor[i]);
    }

         //imprime o vetor em ordem inversa
    for(int i=TAM-1; i>=0; i--)
    {
        printf("\n[ %d ] este é o valor no vetor %d", vetor[i], i);
    }

    return 0;
}
