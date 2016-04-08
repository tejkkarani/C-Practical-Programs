/* 1
  121
 12321
1234321 */
#include<stdio.h>
#include<conio.h>
void main(){
	int rows, space, i, n;
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
		for(i = 1; i <= rows; i++){
			printf("%d", i);
		}
		//Lets add the right triangle
		for(i = rows - 1; i >= 1; i--){
			printf("%d", i);
		}
		//...and goto the next line
		printf("\n");
	}
	getch();
}