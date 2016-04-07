#include<stdio.h>
#include<conio.h>
void main(){
	int num, i, flag = 1;
	clrscr();
	printf("Enter number: ");
	scanf("%d", &num);
	if(num == 1)
		flag = 0;   // 1 is neither prime nor compo-shit
	for(i = 2; i <= num / 2; i++){       //efficiency is key
		if(num % i == 0)
			flag = 0;
	}
	if(flag)
		printf("%d is prime", num);
	else
		printf("%d is not prime", num);
	getch();
}