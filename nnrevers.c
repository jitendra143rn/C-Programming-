#include<stdio.h>
void printNr(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		printNr(n-1);
	}
}
int main()
{
	int x=10;
	printNr(x);
	return 0; 
}
