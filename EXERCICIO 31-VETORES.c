//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
int main()
{
    setlocale(LC_ALL, "");
    int vetor1[5];
    int vetor2[5];
    int vetor3[10];

    int i = 0;
    int j = 0;
    int temp = 0;
    int aux=0;


    for ( i = 0; i < 5; i++ ){
        printf("Digite os numeros do vetor 1:[%d]:",i);
        scanf( "%d", &vetor1[i]);

    }
    printf("\n");
    for ( i = 0; i < 5; i++ ){
        printf("Digite os numeros do vetor 2:[%d]:",i);
        scanf( "%d", &vet2[i] );

    }
    for ( i = 0; i < 5; i++ )
        vetor3[i] = vetor1[i];

    for ( i = 5; i < 10; i++ )
        vetor3[i] = vetor2[i-5];

    temp = vetor3[0];
    for ( i = 0; i < 10; i++ )
        for ( j = i; j < 10; j++ )
            if ( vetor3[j] < vetor3[i]  )
            {
                temp = vetor3[j];
                vetor3[j] = vetor3[i];
                vetor3[i] = temp;
            }
            
            for(i=0;i<10;i++)
                for(j=0;j<10;j++){
            if(vetor3[i]==vetor3[j]&&i!=j){
                aux=vetor3[j];
            }
        }

    printf("\n\nUniao entre os vetores:\n");
     for ( i = 0; i < 10; i++ ){
        if(vetor3[i]!=aux){
        printf( " %d ", vetor3[i]);
        }
    }
    
    return 0;
}
