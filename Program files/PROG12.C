#include<stdio.h>
#include<conio.h>
void main(){
	int num, r, arm , temp;
	clrscr();
	printf("The armstrong numbers between 100 and 999 are:\n");
	for(num = 100; num < 1000; num++){
		temp = num;
		arm = 0;
		while(temp != 0){
			r = temp % 10;
			temp = temp / 10;
			arm = arm + (r * r * r);
		}
		if(num == arm)
			printf("%d ", num);
	}
	getch();
}