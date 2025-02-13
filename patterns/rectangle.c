#include <stdio.h>

int main() {
    printf("Enter the number of rows you want to print: "); int n; scanf("%d", &n);
    int stars = 5;
    for(int i=0;i<n;i++){
        for (int j=0;j<stars;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}