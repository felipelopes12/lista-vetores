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
#define TAM 5

int main()
{
    setlocale(LC_ALL, "");

    int vet[TAM];
    int maior=0, menor;
    float media=0, soma=0;

   
    for(int i=0; i<TAM; i++)
    {
        printf("Digite o valor do vetor %d :", i);
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<TAM; i++)
    {
        if(vet[i]>maior)
            maior=vet[i];
    }

    menor=maior; 
    for(int i=0; i<TAM; i++)
    {
        if(vet[i]<menor)
            menor=vet[i];
    }

    for(int i=0; i<TAM; i++)
    {
        soma += vet[i];
    }

    //imprime o vetor em ordem crescente
    printf("\n");
    for(int i=0; i<TAM; i++)
    {
    printf("Os valores digitados foram %d \n", vet[i]);
    }
    printf("\nO maior valor digitado foi %d \n", maior);
    
    printf("O menor valor digitado foi %d \n", menor);
    
    printf("A media dos valores digitados foi %.2f \n\n\n", media=(soma/TAM));
    return 0;
}
