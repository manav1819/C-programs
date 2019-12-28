#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n,m,i,a;
	printf("print any number: ");
	scanf("%d",&n);
	int array[n];
	for (int j=2,a=0; j<n; j++)
	{
	
	m=0;
	
		for (i=2; i<j; i++)
		{
			if (j%i==0)
			m++;
		}
	
		if(m==0)
		{
		  array[a]=j;
		  printf("%d ",array[a]);
		  a++;
		}
	/*
	if (m==0)
	printf("The number is prime.");
	else
	printf("The number is composite.");*/
	}
	
	return 0;
}
