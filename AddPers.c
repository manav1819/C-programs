#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int AddPer(int num){
	
	int sig,res,sum,pers;
	
        res = num;
        sum = 0;
        while((res>0)){

            sum = sum + (res % 10);
            res = res / 10;
            if (res == 0) {
                if (sum >= 10) {
                    res = sum;
                    sum = 0;
				}
            if (sum < 10)
                pers++;
            }
	}
	return sum;
}

int main(int argc, char *argv[]) {
	
	int num;
	printf("Please enter a positive integer to find the additive persistence, and the integer's additive digital root: ");
	scanf_s("%d", &num);
	int ans;
	ans=AddPer(num);
	printf("%d",ans);
	return 0;
}
