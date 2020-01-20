#include <stdio.h>

int main()
{
	int a,b;
	int sum,mul,sub;
	float div;

	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	sum=a+b;
	mul=a*b;
	sub=a-b;
	div=a/b;
    printf("The sum of %d and %d is : %d\n",a,b,sum);
    printf("\nThe product of %d and %d is : %d\n",a,b,mul);
    printf("\nThe difference of %d and %d is : %d\n",a,b,sub);
    printf("\nThe reminder of %d and %d is : %f\n",a,b,div);
    return (0);
}
