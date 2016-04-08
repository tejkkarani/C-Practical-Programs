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
	long int fact = 1, i;
	for(i = 1; i <= n; i++){
		fact = fact * i;
	}
	return fact;
}