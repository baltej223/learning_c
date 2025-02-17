#include<stdio.h>
int main(){
    int rows=6;

    for (int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(j<=rows-2-i){
                printf("  ");
            }
            else{
                printf("* ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}