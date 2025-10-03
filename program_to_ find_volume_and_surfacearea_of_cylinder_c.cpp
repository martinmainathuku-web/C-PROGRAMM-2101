/*
Name:Martin Maina
Reg no:PA106/G/28855/25
Date:23/9/2025
DEscription:program for area and surface area of cylider
*/
//main function

#include <stdio.h>//preprocessor directive;scanf(),printf()

int main()
{
float pi,radius,height,volume;
printf("Enter radius");
scanf("%f",& radius);

printf("Enter pi");
scanf("%f,&pi");

printf("Enter height");
scanf("%f,%height");

volume=pi*radius*radius*height;

printf("\n volume is %f \n",volume);

 
 float pie,radii,heightt,surfacearea;
      printf("Enter pi:");
      scanf("%f",&pi);
    
      printf("Enter radius;");
      scanf("%f",&radius);
      
      printf("Enter height;");
      scanf("%f",&height);
      
      surfacearea=(2*pi*radius*radius)+(2*pi*radius*height);
      
      printf("/n surfsace area is %f",surfacearea);
      
	return 0;
}
