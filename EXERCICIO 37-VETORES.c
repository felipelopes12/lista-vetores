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
    float vetor [11];
    int i;
    for (i=1; i<=11; i++){
        printf("\nDigite os valores dos elementos %d:", i);
        scanf("%f",&vetor[i]);
    }


    int j;
    float temp;
        for (i=11; i>6; i--){
            for(j=1; j<=i; j++  ){
                if(vetor[j-1] < vetor [j]){
                    temp = vetor[j-1];
                    vetor[j-1] = vetor[j];
                    vetor[j] = temp;
                }
            }
        }
        for (i=6; i>0; i--){
            for(j=1; j<=i; j++  ){
                if(vetor[j-1] > vetor [j]){
                    temp = vetor[j-1];
                    vetor[j-1] = vetor[j];
                    vetor[j] = temp;
                }
            }
        }


        printf("\n vetor ornedado eh; ");
        for(i=1; i<=11; i++){
            printf("\n%.2f\n ", vetor[i]);
        }
        system("pause");
        return 0;
}

