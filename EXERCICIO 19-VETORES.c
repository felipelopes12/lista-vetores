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
#define TAM 50
int main()
{
    setlocale(LC_ALL, "");
    float vetor[TAM];

    for(intor i=0; i<TAM; i++)   {
        vetor[i]=(i+5*i)/(i+1.0);
    }

          // Vai imprime o vetor com 2 casas decimais
    for(int i=0; i<TAM; i++)    {
        printf("%.2lf está no vetor %d\n", vetor[i], i);
    }

    return 0;
}
