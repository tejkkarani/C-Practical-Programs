#include<stdio.h>
#include<conio.h>
int power(int x, int n);
void main(){
	int x, n, y;
	clrscr();
	printf("Enter x and n: \n");
	scanf("%d%d", &x, &n);
	y = power(x, n);
	printf("%d raised to %d = %d", x, n, y);
	getch();
}
int power(int x, int n){
	if(n == 0)
		return 1;
	else
		return x * power(x, n - 1);
}