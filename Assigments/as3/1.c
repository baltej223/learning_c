#include<stdio.h>
int main(){
char a;
printf("Enter any char: "); scanf("%c", &a);

// capital
if (a>=65&&a<=90){
printf("Is capital!");
return 0;
}
// small
else if(a>=97&&a<=122){
printf("Is small!");
return 0;
}
else{
	printf("Is special!");
	return 0;
}

}
