//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#define PAR 100
    int v[10];
    int s[10];

int main()
{

        setlocale(LC_ALL," ");
            v[0] = 50;
                printf("\n Digite 10 elementos de [0,50]:\n");
                for(int c = 0; c < 10; c++)

             while(v[c] < 1 || v[c] > 50)

              scanf("%d", &v[c]);

            for(int c = 0; c < 10; c++)

             if(v[c] % 2 != 0)

              s[c] = v[c];

             else

              s[c] = PAR;

            for(int c = 0; c < 10; c++)

             if(s[c] == PAR)

              printf("%d\n", v[c]);

             else

              printf("%d\t%d\n", v[c], s[c]);

            }






