#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n,m,i;
	printf("print any number: ");
	scanf("%d",&n);
	m=0;
	for (i=2; i<n; i++)
	{
		if (n%i==0)
		m++;
	}
	if (m==0)
	printf("The number is prime.");
	else
	printf("The number is composite.");
	
	
	return 0;
}
