#include <stdio.h>
#include <stdlib.h>  

int main() {
    char str[] = "3.14";

    // to float
    float n1 = atof(str);
    printf("Float value: %f\n", n1);

    //  to int
    int n2 = atoi(str);
    printf("Int value: %d\n", n2);

    // to long
    long n3 = atol(str);
    printf("Long value: %ld\n", n3);

    // int to string
    int temp = 21;
    char n4[20] ;
	 itoa(temp, n4, 10); 
    printf("String value: %s\n", n4);

    // long to string 
    long tem = 213;
    char n5[20];
	ltoa(tem, n5, 10); 
    printf("String value : %s\n", n5);

    return 0;
}

