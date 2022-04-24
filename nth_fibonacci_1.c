#include<stdio.h>
int N_fibonacci(int n);
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("%d\t\t", N_fibonacci(num));
	return 0; 

}

int N_fibonacci(int n)
{
	if(n==1 || n==2)
		return n-1;
	return N_fibonacci(n-1)+N_fibonacci(n-2);
}
