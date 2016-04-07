#include<stdio.h>
#include<conio.h>
void main(){
	int units;
	float charges = 0.0;
	clrscr();
	printf("Enter number of units: ");
	scanf("%d", &units);
	if(units <= 30){
		charges = (float) 0.75 * units;
	}else if(units <= 100){
		charges = (float) 2.50 * units;
	}else if(units <= 300){
		charges = (float) 3.00 * units;
	}else{
		charges = (float) 4.60 * units;
	}
	printf("Charges = Rs %f", charges);
	getch();
}