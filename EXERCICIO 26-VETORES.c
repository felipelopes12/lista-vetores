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
#include <math.h>
#define TAM 10

    void leitorVet(int v[], int tam);
    void imprimeVet(int v[], int tam);
    double calculaDesvioPadrao(int v[], int tam);

    int main() {
        setlocale(LC_ALL, "");
        int v[TAM];
        double desvio;

        leitorVet(v, TAM);
        imprimeVet(v, TAM);

        desvio = calculaDesvioPadrao(v, TAM);
        printf("O desvio padrão é: %.5lf\n", desvio);

        return 0;
    }



    void leitorVet(int v[], int tam) {

    printf("Insira os valores do vetor:\n");
    for(int i=0;i<tam;i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("\n");
}


    void imprimeVet(int v[], int tam) {

        printf("Vetor: ");
        for(int i=0;i<tam;i++) {
            printf("[%3d] ", v[i]);
        }
        printf("\n");
    }


    double calculaDesvioPadrao(int v[], int tam) {

        double media=0, desvio=0;
        int i;


        for (i=0;i<tam;i++) {
            media += v[i];
        }
        media = media / tam;


    for(i=0;i<tam;i++) {
        desvio += pow( (v[i] - media), 2);
    }
    desvio = desvio / (tam-1);
    desvio = sqrt(desvio);

    return desvio;
}

