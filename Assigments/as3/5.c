#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: "); scanf("%d", &num);
	printf("%d is:\n", num);
//	(a) even or odd
  // if and else
  
  if (num%2)
  	printf("Odd");
  else 
  	printf("Even");
 
 printf("(By If-Else)\n");
  // ternary
   num%2?printf("odd"):printf("Even");
   printf("(By Ternary)\n");

// Negative postive
 // by ifelse
if (num<0)
printf("-ve ");
else
printf("+ve ");

printf("(By if-else)\n");
 
// by ternary
num<0 ? printf("-ve"):printf("+ve");
printf(" (By ternary)\n");
 
 return 0;
}

