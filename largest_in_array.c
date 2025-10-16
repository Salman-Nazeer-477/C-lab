#include<stdio.h>

int main(){
	int array[100];
	int n;
	printf("Enter number of elements in array:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	int largest = array[0];
	for(int i = 0; i < n; i++) if(largest < array[i]) largest = array[i];\
	printf("Largest element in array is %d\n", largest);
	return 0;
}
