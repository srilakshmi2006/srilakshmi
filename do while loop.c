#include<stdio.h>
int main ()
{
	int number,sum=0,i=1;
	printf("enter anumber:");
	scanf("%d",&number);
	do {
		sum+=i;
		i++;
	}	while(i<=number);
	printf ("the sum of numbers from 1 to %d is : %d\n", number,sum);
	return 0;
	
	}

