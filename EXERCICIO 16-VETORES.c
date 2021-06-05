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

#define TAM 5
int main()
{
    setlocale(LC_ALL, "");

    float vet[TAM];
    int numero;

                              //lê e preeche o vetor
    for(int i=0; i<TAM; i++)
    {
        printf("Digite o valor do vetor %d :", i);
        scanf("%f", &vet[i]);
    }

    do
    {
        printf("\nOpções de impressão do vetor, escolha uma:\n");
        printf("0 para finalizar.\n");
        printf("1 para imprimir em ordem direita.\n");
        printf("2 para imprimir em ordem inversa.\n");
        scanf("%d", &numero);
        
        if(numero<3)
        {
           
            switch (numero)
            {
            case 1:
                printf("\nVocê escolheu impressão em ordem dereita.\n");
                for(int i=0; i<TAM; i++)
                {
                    printf("%.2lf no posição de vetor %d.\n", vet[i], i);
                }
                break;
            case 2:
                printf("\nVocê escolheu impressão em ordem inversa.\n");
                for(int i=TAM-1; i>=0; i--)
                {
                    printf("%.2lf no posição de vetor %d.\n", vet[i], i);
                }
                break;
            }
        }
      
        else
            printf("\nOpção inválida, escolha uma opção disponivel.");
    }
    while(numero !=0 || numero>2);
    printf("Você finalizou o programa.\n");

    return 0;
}

