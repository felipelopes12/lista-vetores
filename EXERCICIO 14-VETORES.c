//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int main(){

    int a=0,i,j,w,flag;
    
    int vetor[10],iguais[10];
  
    for(i=0;i<10;i++){
        printf("Digite os numeros[ %d ] : ",i+1);
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            
            flag=0;
            if(vetor[i]==vetor[j] && i != j){
                for(w=0; w<10; w++){
                    if(iguais[w] == vetor[j])
                        flag=1;
                }
                if(flag==0){
                    iguais[a]=vetor[i];
                    a++;
                }
            }
        }
     }
     for(i=0; i<a; i++){
        printf("%d ",iguais[i]);
     }
     getch();
     return 0;
}