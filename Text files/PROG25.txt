#include<stdio.h>
#include<conio.h>
void main(){
	int a[100][100], n, i, j, temp; // Find transpose using only one matrix!
	clrscr();
	printf("Enter size of matrix: ");
	scanf("%d", &n);
	printf("Enter elements: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	// now finding the transpose
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i < j){
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
	}
	// lets display the transpose
	printf("The transpose of the given matrix is: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	getch();
}