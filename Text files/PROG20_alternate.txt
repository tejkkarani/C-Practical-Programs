#include<stdio.h>
#include<conio.h>
// Lets try prog20 without sorting the array
void main(){
	int n, i, a[100], largest, secondLargest;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements of array: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	largest = a[0];
	secondLargest = a[0];
	for(i = 0; i < n; i++){
		if(a[i] > largest)
			largest = a[i];
	}
	// for finding second largest use this or from the previous prog:
	for(i = 0; i < n; i++){
		if(a[i] > secondLargest && a[i] != largest)
			secondLargest = a[i];
	}
	printf("Largest element: %d\n", largest);
	printf("Second largest element: %d\n", secondLargest);
	getch();
}