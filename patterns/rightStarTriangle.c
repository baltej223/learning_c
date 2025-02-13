#include<stdio.h>
int main(){
    // printf("Enter number:  "); int n; scanf("%d", &n);
    int n=5; // How many rows are to be printed 
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}