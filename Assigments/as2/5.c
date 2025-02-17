#include<stdio.h>
int main(){
	int a=1;
	int b=2;
	printf("beofore swaping a:%d b:%d\n",a, b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("after swaping a: %d b:%d", a, b);
}
