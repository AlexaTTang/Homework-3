
/*
 * Hwk3.c
 *
 *  Created on: Feb 18, 2019
 *      Author: alexa
 */
#include <stdio.h>
int main()
{

	//Geometry Calculator
	int  option, radius, length, width, base, height, area, pi;
	//Menu
	printf("Geometry Calculator\n\n");
	printf("\t 1. Calculate the Area of a Circle\n");
	printf("\t 2. Calculate the Area of a Rectangle\n");
	printf("\t 3. Calculate the Area of a Triangle\n");
	printf("\t 4. Quit\n\n");
	printf("Enter your choice (1-4): \n");
	//reads the input and stores it at the address of variable option
	scanf("%d", &option);

	//printf("you entered: %d", option);
		switch(option)
		{
			case 1:

			printf("Enter the radius of the circle: \n");
			scanf("%d", &radius);
			area=(radius*radius)*3.14;
			printf("The area of the circle is: %d", area);
			break;

			  default:
			  printf("hello");
			  break;


		}



	return 0;
}


