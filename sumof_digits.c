#include<stdio.h>
int sum_of_digits(int n)
{
	if(n==0)
		return 0;
	return n%10+sum_of_digits(n/10);
}
int main()
{
	int s;
	s=sum_of_digits(256);
	printf("%d\n", s);
	return 0; 
}
