/*
ABCDCBA          Now we have to invert that triangle!
 ABCBA
  ABA
   A
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int rows, space, i, n;
	char ch;
	clrscr();
	printf("Enter number of rows: ");
	scanf("%d", &n);
/* As the pattern is quite complex lets do it first for numbers i.e.
1234321
 12321
  121
   1
	for(rows = n; rows >= 1; rows--){
		//lets add the spaces
		for(space = n - rows; space >= 1; space--){
			printf(" ");
		}
		//Lets add the upper left triangle
		for(i = 1; i <= rows; i++){
			printf("%d", i);
		}
		//...and the upper right triangle
		for(i = rows - 1; i >= 1 ; i--){
			printf("%d", i);
		}
		//..and goto next line
		printf("\n");
*/
	// the actual program starts HERE:
	for(rows = n; rows >= 1; rows--){
		for(space = n - rows; space >= 1; space--){
			printf(" ");
		}
		for(i = 1, ch = 'A'; i <= rows; i++, ch++){
			printf("%c", ch);
		}
		for(i = rows - 1, ch = 'A' + rows - 2 ; i >= 1; i--, ch--){
			printf("%c", ch);
		}
		printf("\n");
	}
	getch();
}
// Whoever gets this program is gonna be really lucky xD