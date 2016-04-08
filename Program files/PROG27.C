#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str[100], rev[100];
	int n, i, j, flag = 1;
	clrscr();
	printf("Enter a string: ");
	gets(str);
	n = strlen(str);
	for(i = 0, j = n-1; i <= n / 2; i++, j--){
		if(str[i] != str[j])
			flag = 0;
	}
	if(flag)
		printf("%s is a Palindrome\n",str);
	else
		printf("%s is not a Palindrome",str);
	getch();
}