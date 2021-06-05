//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15];
    int i, j, lim=15, k;

    for (i=0;i<15;i++) { 
         printf("Digite o valor da posicao %d do vetor: ",i+1);
         scanf("%d",&vetor[i]);
    }
    do {
        k = 0;
        for (i=0;i<lim;i++) {
             if (vetor[i]==0) {
                 for (j=i+1; j<lim; j++)
                        vetor[j-1] = vetor[j];
                 lim--;
                 k++;
             }
        }
    } while (k > 0);
    printf("\n");
    for (i=0;i<lim;i++) {
         printf("VetorFinal [%d] = %d\n",i,vetor[i]);
    }
    return 0;
}
