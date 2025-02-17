#include<stdio.h>
int main(){
	int age;
	printf("Enter your age: ");scanf("%d", &age);
	age<18?printf("Underage"):printf("Adult");
	return 0;
}

