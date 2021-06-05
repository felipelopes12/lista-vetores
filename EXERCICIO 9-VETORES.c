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

    int vet[TAM];

    for(int i=0; i<TAM; i++)
    {
        printf("Digite o valor do vetor %d :", i);
        scanf("%d", &vet[i]);
        
        if(vet[i] % 2 != 0)
        {
            printf("**Digite um valor inteiro e par**\n");
            i--;
        }
    }
       //Vai imprimir em ordem inversa o vetor
       
    printf("Impressão do vetor em ordem inversa.\n");
    for(int i=TAM-1; i>=0; i--)
    {
        printf("[ %d ]   ", vet[i]);
    }
    printf("\n\n");

    return 0;
}