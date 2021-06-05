//Amadeu Filipe Lopes
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {

	float x[5], y[5], prod_esc=0;
	int n, i;

	printf("Digite o valor dos elementos: ");
	scanf("%d", &n);
	while ((n < 1) || (n > 5)) {

		printf("Valor invalido:");
		scanf("%d", &n);
	}

	for (i=0; i<n; i++) {
		printf("Informe x[%d]: ", i);
		scanf("%f", &x[i]);
	}

	for (i=0; i<n; i++) {
		printf("Informe y[%d]: ", i);
		scanf("%f", &y[i]);
	}

	for (i=0; i<n; i++)
		prod_esc += x[i] * y[i];
	printf("Produto escalar: %.2f\n", prod_esc);

	return 0;
}

