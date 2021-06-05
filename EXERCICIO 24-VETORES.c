//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main() {
int i, numero, alt, alto, baixo, maior, menor;

for (i=0; i<10; i++) {
   printf("Informe o numero Aluno:");
   scanf("%d", &numero);
   printf("Informe a altura:");
   scanf("%d",&alt);

if (i == 0) {

maior = menor = alt;
alto = baixo = numero;

    } else {

if (alto < alt) {

maior = alt;
alto = numero;
} if (baixo > alt) {
menor = alt;
baixo = numero;

}
}
}
     
     printf("\nMais alto: eh o aluno de codigo %d com %d cm", alto, maior);
   
     printf("\nMais baixo: eh o aluno de codigo %d com %d cm", baixo, menor);

return 0;
}

