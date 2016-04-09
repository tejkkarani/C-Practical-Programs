#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp1, *fp2;
	char ch;
	clrscr();
	printf("Enter content in file 1: \n");
	fp1 = fopen("File1", "w");
	while((ch = getchar()) != EOF){
		putc(ch, fp1);
	}
	fclose(fp1);
	fp1 = fopen("File1", "r");
	fp2 = fopen("File2", "w");
	while((ch = getc(fp1)) != EOF){
		putc(ch, fp2);
	}
	//Use Ctrl + Z to add EOF character
	fclose(fp1);
	fclose(fp2);
	fp2 = fopen("File2", "r");
	printf("The contents of file 1 have been copied to file 2.\n");
	printf("The contents of file 2 are: \n");
	while((ch = getc(fp2)) != EOF){
		printf("%c", ch);
	}
	fclose(fp2);
	getch();
}
//Good luck with the pracs
//--Vivek, signing out.....