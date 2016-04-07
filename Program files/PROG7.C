#include<stdio.h>
#include<conio.h>
void main(){
	int num, r, rev = 0, temp;
	clrscr();
	printf("Enter number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0){
		r = num % 10;
		num = num / 10;
		rev = (rev * 10) + r;
	}
	if(temp == rev)
		printf("%d is a pallindrome!", temp);
	else
		printf("%d is not a pallindrome :(",temp);
	getch();
}