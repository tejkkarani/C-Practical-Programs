#include<stdio.h>
#include<conio.h>
int sumAbove(int a[100][100], int n);
int sumBelow(int a[100][100], int n);
int sumOn(int a[100][100], int n);
void main(){
	int i, j, a[100][100], n;
	clrscr();
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter elements of matrix: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Sum above diagonal = %d\n", sumAbove(a, n));
	printf("Sum on diagonal = %d\n", sumOn(a, n));
	printf("Sum below diagonal = %d\n", sumBelow(a, n));
	getch();
}
int sumAbove(int a[100][100], int n){
	int i, j, sum = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j > i)
				sum += a[i][j];
		}
	}
	return sum;
}
int sumOn(int a[100][100], int n){
	int i, j, sum = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i == j)
				sum += a[i][j];
		}
	}
	return sum;
}
int sumBelow(int a[100][100], int n){
	int i, j, sum = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i > j)
				sum += a[i][j];
		}
	}
	return sum;
}
