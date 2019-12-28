#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n,m,i,a;
	printf("print any number to check if its pelindrome or not: ");
	scanf("%d",&n);
	
	do{
	
		m=n%10;
		printf("%d",m);
		n=n/10;
	
	}while(n!=0);
	return 0;
}
