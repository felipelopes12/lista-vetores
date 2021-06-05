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
 int x[5], y[5], i;
 
    printf("Vetor x\n\n");
    for(i=0;i<5;++i){
    printf("%d valor: ",i+1);
    scanf("%d",&x[i]);

    }
    printf("Vetor y\n\n");
    for(i=0;i<5;++i){
    printf("%d valor: ",i+1);
    scanf("%d",&y[i]);

    }
    printf("Soma entre x e y::\n\n");
    for(i=0;i<5;++i){
    printf("%d + %d = %d\n",x[i], y[i], x[i]+y[i]);
    }

    printf("Multiplicao entre x e y:\n\n");
    for(i=0;i<5;++i){
    printf("%d * %d = %d\n",x[i], y[i], x[i]*y[i]);

    }
    printf("Intersecao entre x e y:\n");
    for(i=0;i<5;++i){
    if(x[i]==y[0] | x[i]==y[1] | x[i]==y[2] | x[i]==y[3] | x[i]==y[4]){
    printf("%d,",x[i]); }

    }
    printf("\nElementos de x que nao aparecem em y:\n");

    for(i=0;i<5;++i){

    if(x[i]!=y[0] && x[i]!=y[1] && x[i]!=y[2] && x[i]!=y[3] && x[i]!=y[4]){ 

    printf("%d,",x[i]); }

    }
    printf("\nElementos de y que nao aparecem em x:\n");

    for(i=0;i<5;++i){

    if(y[i]!=x[0] && y[i]!=x[1] && y[i]!=x[2] && y[i]!=x[3] && y[i]!=x[4]){

    printf("%d,",y[i]); }
    }
return 0;
}

