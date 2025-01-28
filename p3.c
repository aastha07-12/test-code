#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) 
	{
        printf("The triangle is equilateral.\n");
    } 
	else if (a == b || b == c || c == a) 
	{
        printf("The triangle is isosceles.\n");
    } 
	else 
	{
        printf("The triangle is scalene.\n");
    }

    return 0;
}