//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){
 int a[10], b[10], i;

    printf("Vetor a\n\n");

    for(i=0;i<10;++i){

    printf("%d valor: ",i+1);

    scanf("%d",&a[i]);

    }

    printf("Vetor b\n\n");

    for(i=0;i<10;++i){

    printf("%d valor: ",i+1);

    scanf("%d",&b[i]);
    }

    printf("Intersecao entre a e b:\n");

    for(i=0;i<10;++i){

    if(a[i]==b[0] | a[i]==b[1] | a[i]==b[2] | a[i]==b[3] | a[i]==b[4]| a[i]==b[5]| a[i]==b[6]| a[i]==b[7]| a[i]==b[8]| a[i]==b[9]){

    printf("%d,",a[i]); }

    }
return 0;

}

