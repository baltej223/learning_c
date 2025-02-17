#include<stdio.h>
int main(){
	int sum=0;
	int num;
	do{
		printf("Enter a number: "); scanf("%d", &num);
//		if (num == -999) break;
		sum += num;
	}while(num!=-999);
	
	printf("sum is %d ", sum);
}

