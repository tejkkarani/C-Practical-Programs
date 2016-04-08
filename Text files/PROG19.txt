#include<stdio.h>
#include<conio.h>
void sort(int a[100], int n);
void main(){
	int n, i, a[100];
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements of array: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, n);
	printf("Sorted array: \n");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
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