#include<stdio.h>
#include<math.h>
int main(){
	float num;
	printf("Enter a number");scanf("%f", &num);
	
	printf("sqrt(%f)=%f\n",num, sqrt(num));
	printf("log(%f)=%f\n",num, log(num));
	printf("sine(%f)=%f\n",num, sin(num));
	printf("cos(%f)=%f\n",num, cos(num));
	return 0;
}
