//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#define TAM 6
int main()
{

    int valores [TAM];

    for(int i=0; i<TAM; i++){
        printf("Digite o valor do vetor [%d]=", i);
        scanf("%d", &valores[i]);
    }

           //imprime o vetor lido e salvo em ordem crecente
        printf("\n");
    for(int i=0; i<TAM; i++){
        printf("Valor do vetor %d é [%3d]\n", i, valores[i]);
    }


    return 0;
}

