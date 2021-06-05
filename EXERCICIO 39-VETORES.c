//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int N,cont=0;
    printf("Digite um inteiro para n: \n");
    scanf("%d", &N);

    for (int i=0;i<=N;i++){
      for (int j=0;j<=i;j++){
             if (i==0 || j==0)
                cont = 1;
           else
              cont = cont * (i-j+1)/j ;
           printf("%d ", cont);
  }
  printf("\n");
}
    return 0;
}
