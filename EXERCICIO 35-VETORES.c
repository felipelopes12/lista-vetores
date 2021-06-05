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
#include <string.h>

#define TAM 5
int main()
{
    setlocale(LC_ALL, "");
    int a, b;
    int aux=0;
    int vetorA[TAM], vetorB[TAM];

    for(int i=0; i<1; i++)
    {
        printf("Atribua um valor para a: ");
        scanf("%d", &a);
        if(a<0 || a>10000)
        {
            printf("Digite um valor entre 0 e 10000\n");
            i--;
        }
    }

        for(int i=0; i<1; i++)
    {
        printf("Atribua um valor para b: ");
        scanf("%d", &b);
        if(b<0 || b>10000)
        {
            printf("Digite um valor entre 0 e 10000\n");
            i--;
        }
    }

    for(int i=0; i<TAM; i++)
    {
        vetorA[i]= a % 10;
        a= a / 10;

        vetorB[i]= b % 10;
        b= b / 10;
    }

    for(int i=0; i<TAM; i++)
    {
        vetorA[i]+=vetorB[i]+aux;
        if(vetorA[i] > 9)
        {
            vetorA[i]=vetorA[i]%10;
            aux=1;
        }
        else
            aux=0;
    }

    for(int i=0;i<TAM; i++)
    {
        if(vetorA[i]!=aux){
        printf(" %d ", vetorA[i]);
        }
    }
    return 0;
}
