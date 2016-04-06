#include<stdio.h>
#include<conio.h>
void main(){
	int x, ans;
	clrscr();

	printf("Enter x: ");
	scanf("%d", &x);
	if(x >= 0 && x <= 10){
		printf("f(x) = x^2 + 2\n");
		ans = (x * x) + 2;
	}else if(x > 10 && x <= 20){
		printf("f(x) = x^2 + 2x\n");
		ans = (x * x) + (2 * x);
	}else if(x > 20 && x <= 30){
		printf("f(x) = x^3 + 2x^2\n");
		ans = (x * x * x) + (2 * x * x);
	}else if(x > 30){
		printf("f(x) = 0\n");
		ans = 0;
	}
	printf("Value of f(x) = %d", ans);
	getch();
}