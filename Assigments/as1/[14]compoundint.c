#include<stdio.h>
int main(){
	int basicSal;
	printf("Enter basic sal :");
	scanf("%d", &basicSal);
	float da = 0.1*basicSal;
	float ta = 0.2*basicSal;
	float grossSal= basicSal+da+ta;
	printf("Gross Sal is %f", grossSal);
 return 0;
}
