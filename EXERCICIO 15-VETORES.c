//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[5], i,j, aux;
	
	for(i=0; i<5; i++){
		printf("Digite o %do valor: ", i+1);
		scanf("%d", &vetor[i]);
	
	    
	}
	
	for(i=0; i<5; i++){
		for(j= i+1; j<5; j++){
			if(vetor[i] == vetor[j]){
				aux = vetor[i];
			}
		}
	}
	system("pause");
}