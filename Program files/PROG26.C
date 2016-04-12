#include<stdio.h>
#include<conio.h>
void main(){
	int a[100][100], b[100][100], ans[100][100], i, j, k, n;
	int r1, c1, r2, c2;
	clrscr();
	printf("Enter rows and columns of first matrix: \n");
	scanf("%d%d", &r1, &c1);
	printf("Enter rows and columns of matrix 2: \n");
	scanf("%d%d", &r2, &c2);
	if(c1 == r2){   //matrix multiplication is only possible if c1 = r2
		printf("Enter elements of first matrix: \n");
		for(i = 0; i < r1; i++){
			for(j = 0; j < c1; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Enter elements of matrix 2: \n");
		for(i = 0; i < r2; i++){
			for(j = 0; j < c2; j++){
			scanf("%d", &b[i][j]);
			}
		}
		// the logic which would take hours to understand starts here:
		for(i = 0; i < r1; i++){
			for(j = 0; j < c2; j++){
				ans[i][j] = 0;
				for(k = 0; k < c1; k++){
					ans[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		//lets display the result
		printf("The product of the two matrix is: \n");
		for(i = 0; i < r1; i++){
			for(j = 0; j < c2; j++){
				printf("%d  ", ans[i][j]);
			}
			printf("\n");
		}
	}else
		printf("The two matrix cannot be multiplied.\n");
	getch();
}