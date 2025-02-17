#include<stdio.h>
int main(){
    int size=9; // size can only be odd
    int mid=(size-1)/2;

    for (int i = 1; i <= size; i++){
        for (int j = 1; j <= size; j++){
            if (i==mid+1){
                printf("* ");
            }
            else if(j==mid+1){
                printf("*");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}