#include<stdio.h>
int main(){
    int row =5;
    int col=5;

    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if (j==0+i || j==col-1-i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}