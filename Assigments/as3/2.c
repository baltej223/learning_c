#include<stdio.h>
int main(){
	int a =1;
	int b=2;
	int c=3;
	// if and else:
	printf("Enter num 1: "); scanf("%d", &a);
	printf("Enter num 2: "); scanf("%d", &b);
	printf("Enter num 3: "); scanf("%d", &c);
	
	if (a>b){
		if (a>c){
			printf("MAx is %d", a);
		}
		else{
			if (c>b){
				printf("Max is %d", c);
			}
		}
	}
	else{
		if (b>c){
			printf("Max is %d", b);
		}
		else{
			if(c>b){
				printf("Max is %d", c);
			}
		}
	}
	printf(" [printed by if-else]");
	printf("\n");
	
	int max = 
	(a>b) ?
		(a>c)?a:
			c>b?c:0
	:
	(b>c)?b:
		(c>b)?c:0;
	
	printf("Max is %d", max);
	
	printf(" [printed by ternary]");
	
}

