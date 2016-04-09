#include<stdio.h>
#include<conio.h>
void main(){
	struct hotel{
		char name[50];
		char address[200];
		int charge;
		int nRooms;
	};
	struct hotel h[100];
	int n, i, budget;
	clrscr();
	printf("Enter number of hotels: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		getc(stdin);   // Flushes the \n inserted by scanf
		printf("Enter information about Hotel %d:\n", i + 1);
		printf("Name: ");
		gets(h[i].name);
		printf("Enter address: ");
		gets(h[i].address);
		printf("Enter average room charge: ");
		scanf("%d", &h[i].charge);
		printf("Enter number of Rooms: ");
		scanf("%d", &h[i].nRooms);
	}
	printf("Enter budget: ");
	scanf("%d", &budget);
	printf("Name\tAddress\tCharges\tNumber of rooms\n");
	for(i = 0; i < n; i++){
		if(h[i].charge < budget){
			printf("%s\t%s\t%d\t%d\n", h[i].name, h[i].address, h[i].charge, h[i].nRooms);
		}
	}
	// Now to display hotels with charge < budget
	getch();
}