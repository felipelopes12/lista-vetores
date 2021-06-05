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

int main() {
	int vt[10], vt1[10], vt2[10], i, n1=0, n2=0;

	for (i=0; i<10; i++) {
		printf("Informe vt[%d]: ", i);
		scanf("%d", &vt[i]);
	}
	for (i=0; i<10; i++)
		if (vt[i] % 2 == 0)
			vt2[n2++] = vt[i];
		else
			vt1[n1++] = vt[i];

	printf("%d números ímpares\n", n1);
	for (i=0; i<n1; i++)
	
		printf("\t%d", vt1[i]);

	printf("\n\n%d números pares\n", n2);
	for (i=0; i<n2; i++)

		printf("\t%d", vt2[i]);
	return 0;
}
