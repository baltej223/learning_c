#include<stdio.h>
int main(){
	int a[2][2], b[2][2], c[2][2];
	
	printf("Enter fist matrix:");
	int i, j;
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter second matrix:");
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for (j=0;j<2;j++){
			c[i][j] = a[i][j]+b[i][j];
		}
	}
	
	printf("Sum of given arrays is: \n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf(" %d ", c[i][j]);
		}
		printf("\n");
	}
}


