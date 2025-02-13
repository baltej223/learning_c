#include<stdio.h>
int main(){
    int rows=5;
    int a = 'A';
    for (int i =1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            if (i%2){
                printf("%d ", j);
                
            }
            else{
                printf("%c ", a);
                a++;
            }
        }
        a='A';
        printf("\n");
    }
    return 0;
}