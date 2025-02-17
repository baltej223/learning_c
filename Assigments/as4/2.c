#include <stdio.h>

int main() {
    printf("Enter the size of array you want to input: ");
    int size;
    scanf("%d", &size);

    // Entering the array
    printf("Enter the array: ");
    int i;
    int arr[size+1]; // Array size is one more for the insertion
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int ti;
    printf("Enter the element to insert: ");
    scanf("%d", &ti);

    int id;
    printf("Insert at which position: ");
    scanf("%d", &id);  

    // element got shifted
    for (i = size; i >= id; i--) {
        arr[i] = arr[i-1];
    }

    arr[id-1] = ti;  

    // pprinting
    printf("Array after insertion: ");
    for (i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

