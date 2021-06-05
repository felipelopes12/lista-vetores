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
 int vet[100], s, j = 0;  //

        for(s = 0; s < 100; s++){

            while(j % 7 != 0 || j % 10 == 7){

            j = j + 1;

         }
         vet[s] = j;

         j = j + 1;

        }
        printf("Vetor que foi gerado: ");

        for(s = 0; s < 100; s++){

         printf("%d  ", vet[s]);
}

return 0;

}









