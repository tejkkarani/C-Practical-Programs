#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int x[100], n, i;
	float mean, meanSum = 0, var, varSum = 0, sd;
	clrscr();
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter elements: \n");
	for(i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}
	for(i = 0; i < n; i++){
		meanSum += x[i];
	}
	mean = meanSum / n;
	for(i = 0; i < n; i++){
		varSum += pow((x[i] - mean), 2);
	}
	var = varSum / n;
	sd = sqrt(var);
	printf("Standard Deviation: %f", sd);
	getch();
}
