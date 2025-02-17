 #include<stdio.h>
#include<math.h>
int main(){
	float a, b,c;
	printf("Enter your quadratic equation:\n");
	printf("Enter a: "); scanf("%f", &a);
	printf("Enter b: "); scanf("%f", &b);
	printf("Enter c: "); scanf("%f", &c);
	float D = (b*b)-(4*a*c);
	if (D<0){
		printf("Invalid numbers entered with D<0");
		return 0;
	}
	else{
		float ans1 = (-1*b+sqrt(D))/(2*a);
		float ans2 = (-1*b-sqrt(D))/(2*a);
		printf("For quadratic equation in x, ");
		printf("x: %f , %f", ans1, ans2);
		return 0;
	}
}
