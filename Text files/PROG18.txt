#include<stdio.h>
#include<conio.h>
void main(){
	int n, i, a[100], evenSum = 0, oddSum = 0;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements of array: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0)
			evenSum += a[i];
		else
			oddSum += a[i];
	}
	printf("Even sum: %d\n", evenSum);
	printf("Odd sum: %d\n", oddSum);
	getch();
}