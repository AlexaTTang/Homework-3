
/*
 * Hwk3.c
 *
 *  Created on: Feb 18, 2019
 *      Author: alexa
 */

#include <stdio.h>
int main()
{
	/*
	//Geometry Calculator
	int  option, radius, length, width, base, height, area;
	//Menu
	printf("Geometry Calculator\n\n");
	printf("\t 1. Calculate the Area of a Circle\n");
	printf("\t 2. Calculate the Area of a Rectangle\n");
	printf("\t 3. Calculate the Area of a Triangle\n");
	printf("\t 4. Quit\n\n");
	printf("Enter your choice (1-4): \n");
	//'cleans' out the console
	fflush(stdout);
	//reads the input and stores it at the address of variable option
	scanf("%d", &option);
		//depending on what the value of option is determines which case is executed
		switch(option)
		{
			//calculates the area of a circle
			case 1:
				//asking for user input
				printf("Enter the radius of the circle: \n");
				fflush(stdout);
				scanf("%d", &radius);
					//checks to see if input is a negative number
					if (radius<0)
					{
						printf("Error, cannot have negative values");
					}
					//if input is not a negative number then area is calculated and displayed the on console
					else
					{
					area=(radius*radius)*3.14159;
					printf("The area of the circle is: %d", area);
					}
				//ends case 1
				break;
			//calculates the area of a rectangle
			case 2:
				//asking for user input
				printf("Enter the length of the rectangle: \n");
				fflush(stdout);
				scanf("%d", &length);
				printf("Enter the width of the rectangle: \n");
				fflush(stdout);
				scanf("%d", &width);
					//checks to see if either length or width are negative values
					if (length < 0 || width < 0)
					{
						printf("Error, cannot have negative values");
					}
					//if they are not negative then the area is calculated and displayed on the console
					else
					{
						area = length * width;
						printf("The area of the rectangle is: %d", area);
					}
				//ends case 2
				break;
			//calculates the area of a triangle
			case 3:
				//asking for user input
				printf("Enter the base of the triangle: \n");
				fflush(stdout);
				scanf("%d", &base);
				printf("Enter the height of the triangle: \n");
				fflush(stdout);
				scanf("%d", &height);
					//checks to see if either base or height are negative values
					if (base < 0 || height < 0)
					{
						printf("Error, cannot have negative values");
					}
					//if they are not negative then the area is calculated and displayed on the console
					else
					{
						area = base * height * 0.5;
						printf("The area of the triangle is: %d", area);
					}
				//ends case 3
				break;
			//if user wants to quit
			case 4:
				printf("Fine. Use a calculator instead.");
				break;
			// this is executed if the user enters a number that is not between 1-4
		    default:
				printf("Please enter a number between 1-4");
				break;
		}
		printf("\n\n");


	//Population
	int numYr;
	float sPop, bPer, dPer,newPop;
	//collecting information for calculations
	printf("Enter the starting population size: \n");
	fflush(stdout);
	scanf("%f", &sPop);
	printf("Enter the number of years: \n");
	fflush(stdout);
	scanf("%d", &numYr);
	printf("Enter the birth percentage rate: \n");
	fflush(stdout);
	scanf("%f", &bPer);
	printf("Enter the death percentage rate: \n");
	fflush(stdout);
	scanf("%f", &dPer);
	//checking to see if the entries made by user are valid
	if ( sPop < 2 || dPer < 0 || bPer < 0 || numYr < 0)
	{
		printf("Invalid entry");
	}
	 //if they are valid entries then the total population is calculated and printed onto the console
	 else
	 {
		 newPop = sPop + (bPer*sPop) - (dPer*sPop);
		 float total = newPop*numYr ;
		 printf("The total population is: %.2f\n", total);
	 }

*/
	//tic tac toe board
	//a 2D array with three rows and three columns
	int row, column;
	char board [3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
	printf("Let's play tic tac toe!\n");
		for (int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				printf(" %c", board[i][j]);
			}
			printf("\n");
		}
	printf("Player one enter the location for X on the board\n");
	printf("Player one row option: ");
	fflush(stdout);
	scanf("%d", &row);
	printf("Player one column option: ");
	fflush(stdout);
	scanf("%d", &column);
	int checkRow()
	{
		for (int h = 0; h < 3; h++)
		{
			if(board[0][h] == board[1][h] == board[2][h])
			{
				printf("youve won!\n");
			}
			else
			break;
		}
		return 0;
	}


	return 0;
}


