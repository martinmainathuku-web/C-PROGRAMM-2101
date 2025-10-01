/*
Name:Martin Maina
Reg no:PA106/G/28855/25
Date:28/9/2025
Description:Programme to display water consumption:
0-30 units_consumed=20ksh per unit
31-60 units_consumed=25ksh per unit
Above 60 units_consumed=30ksh per unit
*/

//main function
#include <stdio.h>

int main()
{
	int units_consumed;
	float bill;
	
	//prompt user to enter units consumed;
	printf("Enter units consumed;");
	scanf("%d",&units_consumed);
		if(units_consumed<=30){
		bill=units_consumed*20;
		}
	
		else if(units_consumed<=60){
		bill=units_consumed*25;
		}
		
		else {bill=units_consumed*30;
		}
	printf("Total bill=%2.fksh\n",bill);	
	return 0;
}