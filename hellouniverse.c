#include <stdio.h> // * stdio.h is a header file library which lets us use input and output functions in C

// * This is a comment in C

int main(){ // * This is a function in C (The basic building block)

    printf("Hello World!"); // * This prints in the terminal 
    
    // ! NOTE:It does NOT send cursor to next lines NOR it gives any space between any two consecutive printf statements!!!

    printf("HI");

    printf("I am in the same line as the above!");

    // * Output: Hello World!HII am in the same line as the above!

    // * To prevent the above, just add \n the end of your string

    // ! NOTE: Only use double quotes ("") for printing more than 1 character!!!

    printf("\nI am in a different line!");

    /* Other Escape Sequences
       \t -> jumps 4(or smt) spaces
       \\ -> let's us add a backslash
       \" -> Inserts a " to the string*/

}