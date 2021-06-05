//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int i, maior=0, menor=5, x[5], p_maior, p_menor;
    for (i = 0 ; i < 5 ; i++){
        printf("Digite o valor:\n");
        scanf("%d",&x[i]);
    }
        for (i=0;i<5;i++){
        if(x[i]>maior){
            maior=x[i];
            p_maior=i;
        }
    }
        for(i=0;i<5;i++){
        if(x[i]<menor){
            menor=x[i];
            p_menor=i;
        }
    }
    printf("O maior elemento é: %d \n o menor é: %d\n",maior, menor);
    
    printf("A posiçao do maior elemento é: %d \n e a do menor é: %d",p_maior, p_menor);
    return 0;
}