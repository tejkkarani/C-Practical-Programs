#include<stdio.h>
#include<conio.h>
int gcd(int a, int b);
void main(){
	int a, b;
	clrscr();
	printf("Enter two numbers: \n");
	scanf("%d%d", &a, &b);
	printf("GCD = %d", gcd(a, b));
	getch();
}
int gcd(int a, int b){
	if(a < b)
		gcd(b, a);
	else if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}