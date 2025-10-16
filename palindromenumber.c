#include<stdio.h>

int main(){
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	int rev = 0;
	int temp = num;
	while(temp != 0){
		rev *= 10;
		rev += temp % 10;
		temp = temp / 10;
	}
	if(num == rev) printf("%d is a palindrome\n", num);
	else printf("%d is not a palindrome\n", num);
	return 0;
}
