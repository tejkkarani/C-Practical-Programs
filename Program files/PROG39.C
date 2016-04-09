#include<stdio.h>
#include<conio.h>
void main(){
	int a[100], i, n, *ptr;
	clrscr();
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter elements of array: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("The contents of the array in reverse order are:\n");
	ptr = a;
	ptr += n - 1;
	for(i = 0; i < n; i++, ptr--){
		printf("%d ", *ptr);
	}
	/* Or use:
		for(i = 0; i < n; i++){
			printf("%d ", *(ptr + n - 1 - i));
		}
	*/
	getch();
}