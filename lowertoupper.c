#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	printf("Enter a string:");
	scanf("%s", str);
	int len = strlen(str);
	for(int i = 0; i < len; i++){
		str[i] = toupper(str[i]);
	}
	printf("%s\n", str);
	return 0;
}
	
