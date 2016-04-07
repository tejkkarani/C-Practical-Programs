#include<stdio.h>
#include<conio.h>
void main(){
	int n, a = 0 , b = 1 , c, count = 2;
	clrscr();
	printf("Enter n: ");
	scanf("%d", &n);
	if(n >= 1)
		printf("%d ", a);
	if(n >= 2)
		printf("%d ", b);
	for(count = 3; count <= n; count++){
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
	}
	getch();
}