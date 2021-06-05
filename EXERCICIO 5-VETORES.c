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
    int vet  [TAM];
    int par  =0;

        //    lê e preenche o vetor
    for(int i=0; i<10; i++){
        
        printf("Digite o valor do vetor %d :", i);
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<TAM; i++){
            if(vet[i]%2==0)
                par++;
    }
    printf("\n total de números pares digitados foi :%2d\n", par);
    return 0;
}

