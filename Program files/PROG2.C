#include<stdio.h>
#include<conio.h>
void main(){
	int k, a, x, b, y;
	clrscr();
	printf("Enter a, x , b:\n");
	scanf("%d%d%d", &a, &x , &b);
	printf("Enter k: ");
	scanf("%d", &k);
	switch(k){
		case 1:
			printf("y = ax + b\n");
			y = (a * x) + b;
			break;
		case 2:
			printf("y = ax^2 + b^2\n");
			y = (a * x * x) + (b * b);
			break;
		case 3:
			printf("y = -ax\n");
			y = -a * x;
			break;
		case 4:
			printf("y = a + x\n");
			y = a + x;
			break;
	}
	printf("y = %d", y);
	getch();
}