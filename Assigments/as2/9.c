#include<stdio.h>
int main(){
	int a,b; // num 1, num2
	printf("Enter a number: \n"); scanf("%d", &a);
	printf("Enter another number: \n"); scanf("%d", &b);
	double divide =(double) a/b;
	printf("%lf", divide);
}
