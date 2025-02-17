#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: "); scanf("%d", &n);
	
	int divisibleByFive= n%5;
	int divisibleByEight = n%8;
	
	if (divisibleByFive && divisibleByEight){
		printf("Number is Neither divisible by 5 Or 8");
	}
	else if (!divisibleByFive || !divisibleByEight){
		if (!divisibleByFive && !divisibleByEight)
		printf("Number of divible by both 5 and 8");
		
		if (!divisibleByFive && divisibleByEight){
			printf("Number only divisible by 5");
		}
		else if (divisibleByFive && !divisibleByEight){
			printf("Divisible only by 8 and not by 5");
		}
	}
}

