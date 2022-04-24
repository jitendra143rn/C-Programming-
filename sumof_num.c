#include<stdio.h>
void printN(int n);
int prod(int n);
int sumN(int n);
int sumofEven(int n);
int sumQuareN(int n);
int main()
{
	int num=4;
      printf("%d", sumQuareN(num));

	return 0;
}
int sumN(int n)
{
	if(n==1)
		return 1;

	return n+sumN(n-1);
	

}
int prod(int n)
{
	if(n==1)
		return 1;
	return n*prod(n-1);
}
int fact(int n)
{
	if(n==1 || n==0)
		return 1;
	return n*fact(n-1);
}
int sumofEven(int n)
{
	if(n==1)
		return 2;

	return 2*n+sumofEven(n-1);

}

int sumQuareN(int n)
{
	if(n==1)
		return 1;
	return n*n+sumQuareN(n-1);
}
