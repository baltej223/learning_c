#include<stdio.h>
int main(){
    int rows=5;
    int a=1;
    for (int i=0;i<rows;i++){
        for (int j=0; j<i+1;j++){
            printf("%d", a);
            a=!a;
        }
        printf("\n");
    }
    return 0;
}