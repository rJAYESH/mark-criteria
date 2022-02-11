#include <stdio.h>
int main()
{
	float mark;
	printf("Enter your mark = ");
	scanf("%f",&mark);
	if(mark>=85 && mark<=100)
	{
		printf("Your grade is A");
	}
	else if(mark>=70 && mark<=84)
	{
		printf("Your grade is B");
	}
	else if(mark>=55 && mark<=69)
	{
		printf("Your grade is C");
	}
	else if(mark>=40 && mark<=54)
	{
		printf("Your grade is D");
	}
	else
	{
		printf("Your grade is F");
	}
	return 0;
}
