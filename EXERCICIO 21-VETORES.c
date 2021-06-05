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

int main()
{
    setlocale(LC_ALL," ");
    int vet_A[10],vet_B[10], vet_C[10], i;

        printf("                        TELA DE DADOS DE VETORES\n");
                    for(i=0; i<10; i++){

         printf("Digite os valores do Vetor A: ", i+1);

                    scanf("%d", &vet_A[i]);
   }
            printf("\n");

            for(i=0; i<10; i++){

                printf("Digite os valores do Vetor B: n%d ", i+1);
                scanf("%d", &vet_B[i]);
   }
               printf("\n");

               for(i=0; i<10; i++){

                 vet_C[i]= vet_A[i] - vet_B[i];

                 printf("\n%d ", vet_C[i]);

   }

}



