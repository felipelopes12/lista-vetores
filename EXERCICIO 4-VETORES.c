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
#define TAM 8

int main()
{
    setlocale(LC_ALL, "");
    float vet[TAM];
    float soma=0;
    int x, y;

             //lê e preenche o vetor
    for(int i=0; i<TAM; i++)
    {
        printf("Digite o valor do vetor %d :", i);
        scanf("%f", &vet[i]);
    }

          //lê e salva para o vetores a serem somados
    printf("Digite o primeiro vetor a ser somado :");
    scanf("%d", &x);
    printf("Digite o segundo vetor a ser somado :");
    scanf("%d", &y);

    printf("\nA soma do vetor %d e vetor %d é = %6.2f\n\n",x, y, soma=vet[x]+vet[y]);

    return 0;
}
