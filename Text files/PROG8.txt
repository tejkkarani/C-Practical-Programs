#include<stdio.h>
#include<conio.h>
void main(){
	int num, r, arm = 0, temp;
	clrscr();
	printf("Enter number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0){
		r = num % 10;
		num = num / 10;
		arm = arm + (r * r * r);
	}
	if(temp == arm)
		printf("%d is an armstrong number", temp);
	else
		printf("%d is not an armstrong number",temp);
	getch();
}