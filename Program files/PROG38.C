#include<stdio.h>
#include<conio.h>
void main(){
	int n,i;
	float cost, userPrice;   // Seriously, Turbo C?
	struct book{
		char title[50];
		char author[50];
		float price;
		int quantity;
	};
	struct book b[100];
	clrscr();
	printf("Enter number of books: ");
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		getc(stdin);   //No one likes you, Turbo C
		printf("Enter information of book %d:\n", i + 1);
		printf("Enter title: ");
		gets(b[i].title);
		printf("Enter author: ");
		gets(b[i].author);
		printf("Enter price: ");
		scanf("%f", &cost);
		b[i].price = cost;
		printf("Enter quantity: ");
		scanf("%d", &b[i].quantity);
	}
	printf("Enter lower limit of price: ");
	scanf("%f", &userPrice);
	printf("The books having price greater than %f are:\n", userPrice);
	printf("Title\tAuthor\tPrice\tQuantity\n");
	for(i = 0; i < n; i++){
		if(b[i].price > userPrice)
			printf("%s\t%s\t%f\t%d\n", b[i].title, b[i].author, b[i].price, b[i].quantity);
	}
	getch();
}