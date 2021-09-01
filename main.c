#include <stdio.h>
#include <stdlib.h>

//Main method makes calls to the helper methods during execution (at runtime) to accomplish this project's task.
void main()
{
    AddLineSeparator(); //adds the line separators at the top of the table.
    CreateHeader(); //Creates the header for the results table.
    AddLineSeparator(); //adds a line after the header and before the results.

    //loop runs 10 times for each number between 1 and 10 in order to generate and print each number, its square, and its factorial.
    for(int i = 1; i < 11; i++)
    {
        printf("|\t%d\t|\t%d\t|\t%d\t|\n", i, Square(i), Factorial(i)); //prints i, its square, and its factorial separated by "|" at each execution.
        AddLineSeparator(); //adds a line (separator) after each row of results.
    }
}

//Helper method to calculate the square of a given integer. Takes an int as input and returns its square (also an int).
int Square(int num)
{
    return num * num;
}

//Helper method to, recursively, calculate the factorial of a given integer. Takes an int as input and returns its factorial (also an int).
int Factorial(int num)
{
    if(num <= 1)
        return num;
    else
        return num * Factorial(num - 1);
}

/*
    Helper method to generate the header of the results table which is what gets displayed to console.
    The header contains the following titles: Number, Square, and Factorial in this order thus creating 3 columns for the table.
*/
void CreateHeader()
{
    printf("|     Number\t|     Square\t|    Factorial\t|\n");
}

/*
    Helper method adds a line separator between two lines when called.
    Created for aesthetic purposes concerning the design of the table.
*/
void AddLineSeparator()
{
    printf("-------------------------------------------------\n");
}
