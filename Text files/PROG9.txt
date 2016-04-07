#include<stdio.h>
#include<conio.h>
//Lets do it using functions because why the heck not
int gcd(int a, int b);
int lcm(int a, int b);
void main(){
	int a, b;
	clrscr();
	printf("Enter two numbers: \n");
	scanf("%d%d", &a, &b);
	printf("GCD = %d\n", gcd(a, b));
	printf("LCM = %d\n", lcm(a, b));
	getch();
}
int gcd(int a, int b){
	int i, min;
	min = (a < b) ? a : b; // Finds minimum of the two numbers
	for(i = min; i >= 1; i--){
		if(a %i == 0 && b % i == 0){
			return i;
		}
	}
}
int lcm(int a, int b){
	return (a * b)/ gcd(a, b);
}