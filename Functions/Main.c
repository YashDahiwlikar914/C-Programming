#include <stdio.h>

void message(); // Declaration of a function

int main()
{
    message(); // Call the function
    printf("Hello World!");
    return 0; // return 0 to indicate successful completion of main function
}

void message()
{
    printf("This is a message function.\n"); // This will get executed when the function is called
    return; // return 0 to indicate successful completion of function
}