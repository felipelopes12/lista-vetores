//Amadeu Filipe Lopes
/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int vet [10],aux;
    for(int i = 1; i<=10; i++){
        printf("digite o numero %d de vetor", i);
            scanf("%d", &vet[i]);
}
    for (int x = 1; x<=10; x++){
        for(int y = x; y<10; y++){
            if(vet[x]> vet[y]){
                aux=vet[x];
                vet[x]=vet[y];
                vet[y]=aux;
            }
        }
    }

        for(int i = 1; i<= 10; i++){
            printf("numero %d eh: %d\n",i,vet[i]);
                }
        }

