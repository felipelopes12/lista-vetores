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
    int vetores[9], i, p=0, n=0;
    for(i=0;i<=9;i++)
    {
        printf("informe o valor do vetor [%i]",i+1);
        scanf("%i", &vet[i]);
                     
        if(vet[i]>0)
        p = p +vet[i];
        if(vet[i]<0)
        n = n + 1;
                     }
printf(" soma numeros positivos = %d\n", p);

printf("numeros negativos quantidade = %d\n", n);

system("PAUSE");
return 0;
}