#include<stdio.h>

int main(){
	int n;
	int factorial = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(int i = n; i > 0; i--) factorial = factorial * i;
	printf("Factorial of %d is %d\n", n, factorial);
	return 0;
}	
