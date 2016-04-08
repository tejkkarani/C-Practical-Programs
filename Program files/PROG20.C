#include<stdio.h>
#include<conio.h>
void sort(int a[100], int n);
void main(){
	int n, i, a[100], largest, secondLargest;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements of array: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, n);
	printf("Largest element: %d\n", a[n-1]);
	// for finding second largest:
	largest = a[n-1];
	for(i = n-1; i >= 1; i--){
		if(a[i] != largest)
			break;
	}
	secondLargest = a[i];
	printf("Second largest element: %d", secondLargest);
	getch();
}
void sort(int a[100], int n){
	int i, j, temp;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}