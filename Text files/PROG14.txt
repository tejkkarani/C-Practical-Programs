/* A               As you can see this an exact replica of prog13
  ABA              it just has characters!
 ABCBA
ABCDCBA */
#include<stdio.h>
#include<conio.h>
void main(){
	int rows, space, i, n;
	char ch = 'A';
	clrscr();
	printf("Enter number of rows: ");
	scanf("%d", &n);
	//This loop is for each row
	for(rows = 1; rows <= n; rows++){
		//Lets add the spaces to the left
		for(space = n - rows; space >= 1; space--){
			printf(" ");
		}
		//Lets add the left triangle
		for(i = 1, ch = 'A'; i <= rows; i++, ch++){
			printf("%c", ch);
		}
		//Lets add the right triangle
		for(i = rows - 1, ch = 'A' + rows - 2; i >= 1; i--, ch--){
			printf("%c", ch);
		}
		//...and goto the next line
		printf("\n");
	}
	getch();
}
// I have no idea how this worked but it did... xD