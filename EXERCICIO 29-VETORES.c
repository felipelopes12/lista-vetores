//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
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
    int soma=0;
    int impar=0;

    for(int i=0; i<TAM; i++)
    {
        printf("Digite o valor para o vetor[%d] :", i);
        scanf("%d", &vet[i]);
    }


    //checa e imprime apenas se o valor no vetor for par
    printf("\n");
    for(int i=0; i<TAM; i++)
    {
        if(vet[i] % 2 == 0)
        {
            soma += vet[i];
            printf("Valor [%3d] é par no vetor[%d]\n", vet[i], i);
        }
    }
    printf("A soma de todos os numeros pares no vetor é = %3d\n", soma);

    printf("\n");
    for(int i=0; i<TAM; i++)
    {
        if(vet[i] % 2 != 0)
        {
            impar++;
            printf("Valor [%3d] é impar no vetor[%d]\n", vet[i], i);
        }
    }
    printf("A quantidade de números impares digitos foi %d\n\n", impar);

    return 0;
}

