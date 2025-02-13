#include<stdio.h>
int main(){
    int rows=5;
    for (int i=0;i<rows;i++){
        for(int j=1;j<=2*(i+1);j=j+2){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}