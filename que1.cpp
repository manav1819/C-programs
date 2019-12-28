#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[]) {

	int ind1,ind2,i,j,target=9;
	int arr[4]={1,7,11,2};
	
	for (i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				ind1=i;
				ind2=j;
				break;
			}
		}
	}
	
	//printf("%d and %d are the required index for the taget.",ind1,ind2);    
	printf("Wow. The required indexes are %d and %d",ind1,ind2);
	return 0;
}
