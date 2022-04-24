//PRINT NATURAL NUMBER 
#include<stdio.h>
void printN(int n);
int main()
{
	int x;
	printf("Enter a number : ");
	scanf("%d", &x);
	printN(x);
	return 0; 

}
void printN(int n)
{
	if(n>0)
	{
		printN(n-1);
		printf("%d",n);
	}

}
