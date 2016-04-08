#include<stdio.h>
#include<conio.h>
#include<math.h>
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
	int i, p = 1;
	for(i = 1; i <= n; i++){
		p = p * x;
	}
	return p;
}