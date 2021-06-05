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
#include <math.h>
#define tam 10

int main() { 
    int n_primo[tam],i;
    for (i=1;i<=tam;i++) {

            printf("Informe um valor para a posição[%d]:",i);
            scanf("%d",&n_primo[i]);
    }

    for (i=1;i<=tam;i++) {
        if(n_primo[i]==2) {
            printf("numero primo %d esta na posicao %d do vetor\n",n_primo[i],i);
         } else if(n_primo[i] %2==0) {
            printf("");
        } else
            printf("numero primo %d esta na posicao %d do vetor\n",n_primo[i],i);
    }
    return 0;
}