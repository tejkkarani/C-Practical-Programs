#include<stdio.h>
#include<conio.h>
int search(int a[100], int n, int element);
void main(){
	int a[100], n, i, element, pos = -1;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("Enter element to be searched: ");
	scanf("%d", &element);
	pos = search(a, n, element);
	if(pos == -1)
		printf("Element not found\n");
	else
		printf("Element found at position: %d\n", pos);
	getch();
}
int search(int a[100], int n, int element){
	int i;
	for(i = 0; i < n; i++){
		if(a[i] == element)
			return i + 1;
	}
	return -1;
}