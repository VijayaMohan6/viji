#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	printf("Enter your Number to test odd or even");
	scanf("%d",&a);
	labelone : if(a>0)
	{
	if (a%2==0)
	{
	printf("The number %d is even",a);
	}
	else
	{
	printf("The number %d is odd",a);
	}
	}
	
	else
	{
		printf("Please enter the positive number");
		goto labelone;

	}
	return 0;
}
