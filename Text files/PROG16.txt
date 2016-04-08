#include<stdio.h>
#include<conio.h>
int sum(int num);
void main(){
	int sum=0, num;
	clrscr();
	printf("Enter number: ");
	scanf("%d", &num);
	sum = sumOfDigits(num);
	printf("Sum of digits of %d is %d", num, sum);
	getch();
}
int sumOfDigits(int num){
	int r, sum = 0;
	while(num != 0){
		r = num % 10;
		num = num / 10;
		sum += r;
	}
	if(sum >= 10)
		sum = sumOfDigits(sum);
	return sum;
}