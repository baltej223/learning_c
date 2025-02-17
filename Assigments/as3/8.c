#include<stdio.h>
int main(){
	int nums[5];
	int i;
	for (i=0;i<5;i++){
		printf("Enter %d number: ", i+1); scanf("%d", &nums[i]);
	}
	
	int average =0;
	for (i=0;i<5;i++){
		average += nums[i];
	}
	average /= 5;
	// It could have been done even without using loops but I did it anyway
	
	int max=nums[0];
	int min=nums[0];
	for (i=1; i<=5;i++){
		if (max < nums[i]){
			max = nums[i];
		}
		if (min > nums[i]){
			min = nums[i];
		}
	}
	printf("Average is %d\n", average);
	printf("Max is %d and Min is %d\n", max, min);
	
}

