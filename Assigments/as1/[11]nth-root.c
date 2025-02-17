#include<stdio.h>
#include<math.h>
int main(){
	double number;
	float nthroot;
	printf("Enter the number to find nth root of: ");
	scanf("%lf",&number);
	printf("enter the nth root: ");
	scanf("%f", &nthroot);
	float rootInv = 1/nthroot;
	double answer = pow(number,rootInv);
	printf("Nth root of %d = %.20f", number, answer);
return 0;
}
