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
#define TAM 10

int main()
{
    setlocale(LC_ALL, "");
    int vetores[TAM];
    int maior=0 , menor;

         //lê e preenche o vetor
    for(int i=0; i<TAM; i++)
    {
        printf("Digite o valor do vetor %d :", i);
        scanf("%d", &vetores[i]);
    }
   
    for(int i=0; i<TAM; i++)
    {
        if(vetores[i]>maior)
            maior=vetores[i];
    }
    //salva o menor elemento
    for(int i=0; i<TAM; i++)
    {
        if(vetores[i]<menor)
            menor=vetores[i];
    }

    printf("\nO maior número é o %3d, e o menor é o %3d", maior, menor);
    return 0;
}
