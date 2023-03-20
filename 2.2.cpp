#include <iostream>

int main()
{
	int a;
	int b;
	
	//Ask for numbers
	printf("input A\n");
	scanf("%i",&a);	

	printf("input B\n");
	scanf("%i",&b);	
	
	//Condition
	
	if(a<b)
	{
		printf("A is greater than B\n");
	}
	else
	//Equality check
	{
		if(a==b)
		{
		printf("A is equal to B\n");
		}
		else
		{
		printf("A is less than B\n");
		}
	}
}
