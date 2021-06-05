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

    float vetores[TAM];
    float quadrados[TAM];

    //lê e preenche o vetor
    for(int i=0; i<TAM; i++)
    {
        printf("Digite o valor do vetor %d :", i);
        scanf("%f", &vetores[i]);
    }
    for(int i=0; i<TAM; i++){
        quadrados[i]=vetores[i]*vetores[i];
    }

        //imprime o vetor que foi digito
    printf("\nPrimeiro conjunto :\n");
    for(int i=0; i<TAM; i++){
        printf("%8.2f", vetores[i]);
    }

        //imprime o vetor onde foi salvo e o quadrado do vetor original
    printf("\n\nO quadrado do primeiro conjunto :\n");
    for(int i=0; i<TAM; i++){
        printf("%8.2f", quadrados[i]);
    }
    printf("\n\n");

    return 0;
}
