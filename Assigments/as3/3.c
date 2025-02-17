#include<stdio.h>
int main(){
	printf("Enter two numbers:\n");
	int a, b;
	printf("Enter number 1: "); scanf("%d",&a);
	printf("Enter number 2: "); scanf("%d",&b);
	
	printf("Addition : 1\n");
	printf("Subtraction : 2\n");
	printf("Multiplication : 3\n");
	printf("Division : 4\n");
	printf("Modulo : 5\n");
	
	int opration;
	printf("Enter the number of opration which you want to perform: "); scanf("%d", &opration);
	
	switch(opration){
	case 1:
		printf("Addition is %d", a+b);
		break;
	
	case 2:
		printf("Subrtaction is %d", a-b);
		break;
	
	case 3:
		printf("Multiplication is %d", a*b);
		break;
	
	case 4:
		printf("Division is %d", a/b);
		break;
	
	case 5:
		printf("modulo is %d", a%b);
		break;
}
}

