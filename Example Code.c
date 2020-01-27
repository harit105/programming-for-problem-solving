
//-------
// Not for Harit
// Include this headnote mentioning author, description of the problem, also if any test cases to test the program. 
// This makes it easy for a person unknown to the program to easily understand your program as well as testing. 
//-------

/******************************************************************************
 Author: Chaitanya Shah
 Description: Program to categrize marks into grade divisions.
 
 //Test cases: 
 Marks input: 101, 100, 99, 80, 79, 65, 60, 59, 49, 40,39, 0, -2
*******************************************************************************/

#include <stdio.h>


//-------
// Not for Harit
// For a function, provide a small description of what that function is doing. 
// What is the input to the function and what is the output. 
//-------


// Function to categorize marks into grade bins. 
// Input: int marks
// Output: void
void categorizeMarks(int marks)
{
    //Categorization of marks via if-else ladder
    if(marks>= 80 && marks <= 100)
    {
        printf("Congratulations! You passed with Distinction Grade.");
    }
    else if (marks >= 69 && marks <= 79)
    {
        printf("Congratulations! You passed with First Class.");
    }
    else if (marks >= 40 && marks <= 59)
    {
        printf("Congratulations! You passed with Second Class.");
    }
    else if (marks >= 0 && marks <40)
    {
        printf("You failed to pass. Let this not demotivate you! Figure out what went wrong.");
    }
    else
    {
        printf("I think you are special! We are unable to categorize your marks.");
    }
    
//-------
// Not for Harit
// Event though assignment said to categorize into "Disctinction", "Second Class", etc., 
// give your personal touch. Make things more humane. This what I have done is an example of 
// good design. a design with emotion. Do take care of it. This is what can differntiate you from others. 

// Also, consider all the edge cases. Edge cases are those, which can produce unexpected output. 
// For example: If someone inputs marks as -2 then how are you going to take case of that case? 
// In real world: Employees spend hours to identify edge cases before publishing to the world. 
//-------
}


int main()
{
//-------
// Not for Harit
// Create a modular code. Varaible Declaration -> Input -> Processing -> Output. 
// This can be different per program, but whenever you can you should make sections. 
// Why?: Extremly helpful for debugging code. 
//-------

    //variable declaration
    int marks; 
 
    //Input
    printf("Enter Your marks: ");
    scanf("%d", &marks); 
    
//-------
// Not for Harit
// Functions. This is one of the most important things.
// Make functions rather than writing all the code into the main. Even through it is of a single line, making function can be useful. 
// Why?: Makes that code reusable in any section and for debugging. Not useful for the assignment however, it is a good practice. 
//-------

    //Processing and Output
    categorizeMarks(marks); 
    
    return 0;
}
