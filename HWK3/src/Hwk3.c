
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
	int  option, radius, length, width, base, height, area;
	//Menu
	printf("Geometry Calculator\n\n");
	printf("\t 1. Calculate the Area of a Circle\n");
	printf("\t 2. Calculate the Area of a Rectangle\n");
	printf("\t 3. Calculate the Area of a Triangle\n");
	printf("\t 4. Quit\n\n");
	printf("Enter your choice (1-4): \n");
	//reads the input and stores it at the address of variable option
	scanf("%d", &option);

		switch(option)
		{
			case 1:
				printf("Enter the radius of the circle: \n");
				scanf("%d", &radius);
					if (radius<0)
					{
						printf("Error, cannot have negative values");
					}
					else
					{
					area=(radius*radius)*3.14;
					printf("The area of the circle is: %d", area);
					}
				break;

			case 2:
				printf("Enter the length of the rectangle: \n");
				scanf("%d", &length);
				printf("Enter the width of the rectangle: \n");
				scanf("%d", &width);
					if (length< 0 || width < 0)
					{
						printf("Error, cannot have negative values");
					}
					else
					{
						area = length * width;
						printf("The area of the rectangle is: %d", area);
					}
				break;

			case 3:
				printf("Enter the base of the triangle: \n");
				scanf("%d", &base);
				printf("Enter the height of the triangle: \n");
				scanf("%d", &height);
					if (base < 0 || height < 0)
					{
						printf("Error, cannot have negative values");
					}
					else
					{
						area = base * height * 0.5;
						printf("The area of the triangle is: %d", area);
					}
				break;

			case 4:
				printf("You should use a calculator instead");
				break;

		    default:
				printf("Please enter a number between 1-4");
				break;
		}



	return 0;
}


