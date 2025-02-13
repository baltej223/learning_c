#include<stdio.h>
#include <math.h>

void drawTriangle(float angle, int rows);
int main(){
    drawTriangle(45.0, 10); // Draw a right angle triangle with one of its angle = 45deg and height = 10 rows;
    return 0;
}

void drawTriangle(float angle, int rows){

    // for example if angle param is 45 and rows = 5 that means that
    // Number of stars in base and hight are going to be equal and will be equal to 5
    // if angle param is 60 and row = 5
    // then I want to keep height = 5 and will have to find the number of stars that must be in base using tangent
    // number of stars in base  = 5*cot(60)

    double PI = asin(1.0)*2;
    double angle_in_radian = angle*(PI/180.0); 
    double base = rows*(1/tan(angle_in_radian));

    // printf("%d", base
    int increaseInStarsAtEachItration = (int) base/(rows);
    int stars_to_print_at_this_itration =0;
    for (int i=1;i<=rows;i++){
        for( int j=1; j<=stars_to_print_at_this_itration+1; j++){
            printf("* ");
        }
        stars_to_print_at_this_itration += increaseInStarsAtEachItration;
        printf("\n");
    }
}