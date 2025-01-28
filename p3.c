#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a, b, c");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c && a==c)
	{
	    printf("The triangle is equilateral");
    }
    else if (a==b || b==c || c==a)
    {
    	printf("The triangle is isosceles");
	}
	else if (a!=b && b!=c && a!=c)
	{
		printf("The triangle is scalene");
	}
	else 
	printf("The triangle is right angled triangle");
	return 0;
}
