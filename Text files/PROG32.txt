#include<stdio.h>
#include<conio.h>
long int factorial(int n);
void main(){
	int n;
	long int fact;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &n);
	fact = factorial(n);
	printf("%d! = %ld", n, fact);
	getch();
}
long int factorial(int n){
	if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}