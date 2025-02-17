#include<stdio.h>
int main(){
    printf("Enter rows: "); int rows; scanf("%d", &rows);
    printf("Enter cols: "); int cols; scanf("%d", &cols);
    // int rows =5, cols=5; 
    for (int i=0;i<rows;i++){
        // printf("i:%d\n", i);
        if (i==0){
            for (int j=0;j<cols;j++){
                printf("* ");
            }
        } 
        else if(i==(rows-1)){
            for (int j=0;j<cols;j++){
                printf("* ");
            }
        }
        else{
            for (int j =0;j<cols;j++){
                // printf("j:%d", j);
                if (j==0){
                    printf("* ");
                }
                else if (j==cols-1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}