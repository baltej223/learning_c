#include<stdio.h>
int main(){
	int nume,denomi;
	printf("Enter numerator: ");	
	scanf("%d", &nume);
	printf("Enter denominator: ");
	scanf("%d",&denomi);
//	float fraction =  nume/denomi; 
	printf("The entered fraction is : %d/%d", nume, denomi);
return 0;
}
