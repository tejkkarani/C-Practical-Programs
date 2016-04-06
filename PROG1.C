#include<stdio.h>
#include<conio.h>
void main(){
	int a, b, c, largest, temp;
	clrscr();
	printf("Enter 3 nos: \n");
	scanf("%d%d%d", &a ,&b ,&c);
	temp = ( a > b ) ? a : b;
	largest = ( temp > c ) ? temp : c;
	printf("Largest = %d", largest);
	getch();
}