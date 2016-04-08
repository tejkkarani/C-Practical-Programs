#include<stdio.h>
#include<conio.h>
//Lets do it by functions to keep the ideas seperated
int largest(int a[100], int n);
int smallest(int a[100], int n);
void main(){
	int n, i, a[100], max, small;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements of array: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	max = largest(a, n);
	small = smallest(a, n);
	printf("Largest element: %d\n", max);
	printf("Smallest element: %d\n", small);
	getch();
}
int largest(int a[100], int n){
	int max, i;
	max = a[0];
	for(i = 0; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	return max;
}
int smallest(int a[100], int n){
	int small, i;
	small = a[0];
	for(i = 0; i < n; i++){
		if(a[i] < small)
			small = a[i];
	}
	return small;
}