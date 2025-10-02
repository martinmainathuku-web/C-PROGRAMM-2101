/*
Name:Martin Maina Thuku
Reg no:PA106/G/28855/25
Date:1/10/2025
Description;program to display options for data bundles
1 100Mb=50Ksh
2 500Mb=200Ksh
3 1Gb=350Ksh
4 2Gb=600Ksh
*/

//main function
#include <stdio.h>

int main()
{
	int choice;
	//Display menu
	printf("Mobile data bundles\n");
	printf("1.100Mb@50Ksh\n");
	printf("2.500Mb@200Ksh\n");
	printf("3.1Gb@350Ksh\n");
	printf("4.2Gb@600Ksh\n");
	



    // Prompt user to enter choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Switch statement
    switch(choice) {
        case 1:
            printf("You selected 100MB for 50Ksh\n");
            break;
        case 2:
            printf("You selected 500MB for 200Ksh\n");
            break;
        case 3:
            printf("You selected 1GB for 350Ksh\n");
            break;
        case 4:
            printf("You selected 2GB for 600Ksh\n");
            break;
        default:
            printf("Invalid choice, please enter a number between 1 and 4.\n");
    }

    return 0;
}
	
