#include<stdio.h>
int main(){
	float nume,denomi;
	printf("Enter numerator: ");	
	scanf("%f", &nume);
	printf("Enter denominator: ");
	scanf("%f",&denomi);
	float fraction = nume/denomi; 
	printf("The entered fraction is : %.10f", fraction);
return 0;
}
