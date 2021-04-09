//this is a program to print out your mailing address info using strings.
#include<stdio.h>
#include<conio.h>
main()
{
	int doorNo,PinCode;
	char name[20],street[20],city[20];
	printf("This is an information we wnat to get from you to know you more.\nPlease follow the instruction carefully.");
    printf("\nEnter the following in order:\nYour Name, your door number, your street, your city and your pin code\n");
	//printf("Enter your Name:\t");
	scanf("%s",&name);
//	printf("\nEnter your Door Number:\t");
	scanf("%d",&doorNo);
//	printf("\nEnter your Street:\t");
	scanf("%s",&street);
//	printf("\nEnter your City:\t");
	scanf("%s",&city);
	//printf("\nEnter your Pin Code:\t");
	scanf("%d",&PinCode);
	getch();
	printf("\n\n\n\n\nName: %s\n\nDoor Number: %d\n\nStreet: %s\n\nCity: %s\n\nPin Code: %d",name,doorNo,street,city,PinCode);
	return 0;
}
