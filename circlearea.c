#include<stdio.h>
#define PI 3.14159
int main(){
	float radius;
	printf("Enter the radius:");
	scanf("%f", &radius);
	printf("Radius is %f\n", PI * radius * radius);
	return 0;
}
