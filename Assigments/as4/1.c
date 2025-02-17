#include<stdio.h>
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int reversedArr[10];

// reversing it
	int i;
	for(i=0;i<10;i++){
		reversedArr[10-1-i] = arr[i];
	}
	
	// printing
	for(i=0;i<10;i++){
//		printf("[]")
		i==0?printf("[ %d,", reversedArr[i]):i!=9?printf("%d,", reversedArr[i]):printf("%d ]", reversedArr[i]) ;
	}
}


