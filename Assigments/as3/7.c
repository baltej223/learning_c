#include<stdio.h>
int main(){
int days;
printf("Enter the number of days you are late: "); scanf("%d", &days);

if (days>=0 && days <=5 ){
	printf("You have to give a fine of 5 paisa\n");
}
else if (days>=6 && days <=10 ){
	printf("You have to give a fine of 1 rupee\n");
}
else if (days>30){
	printf("Your membership has be canceled.\n");
}
else{
	if (days<0){
		printf("Wrong input");
	}
}


}

