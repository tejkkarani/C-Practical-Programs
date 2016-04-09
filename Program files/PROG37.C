#include<stdio.h>
#include<conio.h>
void main(){
	struct Player{
		char name[50];
		char teamName[200];
		float battingAvg;
	};
	struct Player p[100], temp; //temp is for sorting battingAvg
	int n, i, j;
	float bAvg; //For the floating point mess in Turbo C Structures!
	clrscr();
	printf("Enter number of players: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		getc(stdin);   // Flushes the \n inserted by scanf
		printf("Enter information about Player %d:\n", i + 1);
		printf("Name: ");
		gets(p[i].name);
		printf("Enter team: ");
		gets(p[i].teamName);
		printf("Enter batting average: ");
		scanf("%f", &bAvg);
		p[i].battingAvg = bAvg;
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(p[i].battingAvg > p[j].battingAvg){
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	printf("Name\tTeam\tBatting Average\n");
	for(i = 0; i < n; i++){
	      printf("%s\t%s\t%f\n", p[i].name, p[i].teamName, p[i].battingAvg);
	}
	getch();
}