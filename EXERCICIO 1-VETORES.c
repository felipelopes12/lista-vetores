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

    int A, soma;
    int a[TAM]={1, 0, 5, -2, -5, 7};

    
    printf("Impressão do vetor antes da alteração de valor\n");
    for(int i=0; i<TAM; i++){
        printf("Valor do vetor %3d é [%3d]\n", i, a[i]);
    }

               //A soma dos vetores 0, 1 e 5
    soma=a[0]+a[1]+a[5];
    printf("A soma dos valores contidos no vetores \nA[0], A[1] e A[5] é = %3d.\n", soma);

    /
    a[4]=100;

         //Ele imprime o vetor em ordem crecente
    printf("\nImpressão do vetor após alteração de valor\n");
    for(int i=0; i<TAM; i++){
        printf("Valor do vetor %3d é [%3d]\n", i, a[i]);
    }


    return 0;
}
