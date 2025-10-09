/*
Name:Martin Maina Thuku
Reg no:PA106/G/28855/25
Description:program for psssword system
*/
//main function

#include <stdio.h>//preporocessor directive;scanf(),printf()
#include <stdio.h>

int main()  
{
int password;

do{
	printf("Enter password:");
	scanf("%d",&password);
	
if(password==1234){
	printf("Access Granted.\n");
}else{
	printf("Incorrect password.\n");
}

} while(password!=1234);
{
	
}  	
	return 0;
}
