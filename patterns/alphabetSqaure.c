#include<stdio.h>
int main(){
    int a = 'A';
    int rows=6;

    for (int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%c", a);
            a++;
        }
        a='A';
        printf("\n");
    }
    return 0;
}