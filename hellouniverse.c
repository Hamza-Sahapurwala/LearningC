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

    printf("\nI am in a different line!\n");

    /* Other Escape Sequences
       \t -> jumps 4(or smt) spaces
       \\ -> let's us add a backslash
       \" -> Inserts a " to the string
       */

    // ! Variables

    int a = 10;

    float b = 10.01;

    char c = 'C'; // * Single characters should always be in single quotes ('')

    // * We can also assign like this

    int d;

    d = 15;
    
    // ! Printing variables in printf statements

    // * It's C, it's not easy to even print integers alone in printf statements

    // * We need format specifiers for that!!!

    // * What are format specifiers, you may ask?

    // * They tell what data type the variable is storing to the compiler

    // * That's why C is a very secure language, even the compiler doesn't know what value and data type the variable holds

    // * Format specifiers are used to take inputs and outputs of specific data types

    // * It always starts with a %

    // * %d = int

    // * %c = character

    // * %f = float

    printf("%d\n", d);

    printf("%f\n", b);

    printf("%c\n", c);

    printf("My name is %c and my age is %d\n", d, c); // * See this line doesn't print what we want it too

    // * As said earlier, C doesn't know anything that you are printing

    // * for %c I have given a integer value and for %d I have given a character value(which was converted to ascii)

    // * The correct statement for the above would be

    printf("My name is %c and my age is %d\n", c, d); // * This gives the statement we want

    // * We can also print individual values

    printf("%d\n", 9);

    printf("%f\n", 0.01);

    printf("%c\n", 'A');
}