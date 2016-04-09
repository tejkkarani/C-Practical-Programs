#include<stdio.h>
#include<conio.h>
void main(){
	int i, n, m, a, end;
	char str[100], newStr[100];
	clrscr();
	printf("Enter a string: ");
	gets(str);
	printf("Enter starting position: ");
	scanf("%d", &m);
	printf("Enter number of characters: ");
	scanf("%d", &n);
	end = m - 1 + n;
	for(i = m - 1, a = 0; i < end; i++, a++){
		newStr[a] = str[i];
	}
	newStr[a] = '\0';
	printf("Extracted string: %s", newStr);
	getch();
}