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

    int element_to_search;
    printf("Enter the element to search: ");
    scanf("%d", &element_to_search);

   
   
    for (i = 0; i < size + 1; i++) {
        if (arr[i] == element_to_search){
        	printf("%d found at index %d, position %d\n", element_to_search, i, i+1);
        	break;
		}
    }

    return 0;
}

