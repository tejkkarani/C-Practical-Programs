#include<stdio.h>
#include<conio.h>
void main(){
	int a[100][100], n, i, j, flag = 1;
	clrscr();
	printf("Enter size of matrix: ");
	scanf("%d", &n);
	printf("Enter elements of the matrix: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	//A matrix if symmetric if A = A^T transpose
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(a[i][j] != a[j][i])
				flag = 0;
		}
	}
	if(flag)
		printf("Matrix is symmetric.\n");
	else
		printf("Matrix is not symmetric.\n");
	getch();
}