#include<stdio.h>
int main(){
	int arr[10]={32,-19,-20,0,8,3,4,7,4,6};
	
	
	// bubble sort
	int i;
	int j;
	for (i=0;i<9;i++){
		for (j=0;j<10-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("Sorted array: ");
	for (i=0;i<10;i++){
		printf("%d ", arr[i]);
	}
	
	
}


