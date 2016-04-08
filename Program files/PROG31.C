#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int num);
void main(){
	int num, i, flag = 1;
	clrscr();
	printf("Enter number: ");
	scanf("%d", &num);
	flag = prime(num);
	if(flag)
		printf("%d is prime", num);
	else
		printf("%d is not prime", num);
	getch();
}
int prime(int num){
	int i;
	if(num == 1 || num == 0)
		return 0;
	if(num == 2)
		return 1;
	// This is the most efficient or just go from 2 to n / 2
	for(i = 2; i <= (int)sqrt(num); i++){
		if(num % i == 0)
			return 0;
	}
	return 1;
}