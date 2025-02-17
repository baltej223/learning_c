#include <stdio.h>

int main() {
    printf("Enter the size of array you want to input: ");
    int size;
    scanf("%d", &size);


    printf("Enter the array: ");
    int i;
    int arr[size+1]; 
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum;
    for (i=0;i<size; i++){
    	sum += arr[i];
	}
	
	float average = (float) sum/size;

   
	printf("Sum: %d and average: %f", sum, average);


	return 0;
}

