#include<stdio.h>
int main(){
	int principalamt, roi,time;
	printf("Enter principal amt: ");
	scanf("%d", &principalamt);
	printf("Enter ROI: ");
	scanf("%d", &roi);
	printf("Enter time: ");
	scanf("%d", &time);
	float simple_intrust = (float)((principalamt*time*roi)/100);
	printf("simple intrust  is %f", simple_intrust);
 return 0;
}
