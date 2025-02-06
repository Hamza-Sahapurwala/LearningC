#include <stdio.h> // * stdio.h is a header file library which lets us use input and output functions in C

#include <stdbool.h> // * stdbool.h is called for us being able to use boolean values

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

    double ef = 5.23;
    
    // ! Printing variables in printf statements

    // * It's C, it's not easy to even print integers alone in printf statements

    // * We need format specifiers for that!!!

    // * What are format specifiers, you may ask?

    // * They tell what data type the variable is storing to the compiler

    // * That's why C is a very secure language, even the compiler doesn't know what value and data type the variable holds

    // * Format specifiers are used to take inputs and outputs of specific data types

    // * It always starts with a %

    // * %d or %i = int

    // * %c = character

    // * %s = string

    // * %f or %F = float

    // * %lf = double

    printf("%d\n", d);

    printf("%f\n", b);

    printf("%c\n", c);

    printf("My name is %c and my age is %d\n", d, c); // * See this line doesn't print what we want it too

    // * As said earlier, C doesn't know anything that you are printing

    // * for %c I have given a integer value and for %d I have given a character value(which was converted to ascii)

    // * The correct statement for the above would be

    printf("My name is %c and my age is %d\n", c, d); // * This gives the statement we want

    // * We can also print individual values

    printf("%d\n", 9); // ! We can also use %i

    printf("%f\n", 0.01); // ! We can also use %F

    printf("%c\n", 'A');

    // * You can change the values of variables freely(keep in mind that the data type is same)

    // ! Variable Declaration
    
    int x = 5, y = 6, z = 7;

    // OR

    int p,q,r;

    p=q=r=15;

    /* Naming rules I found online:
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case-sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names*/

    // ! Characters

    char aaa = 65; // * We are giving an integer value to a character

    // * What that does is convert the integer to the related ascii value

    printf("%c\n",aaa); // * This returns A

    // char hello = "Hello";

    // printf("%c\n",hello); // * This doesn't work and prints some random value

    // char hell = 'Hello';

    // printf("%c\n",hell); // * This prints the last letter of value hell (Look at the single quotes)

    char hel[] = "Hello"; // * This is strings in C

    printf("%s\n",hel); // * This helps us print strings

    // ! Float vs Double

    // * Float data type has a precision of 6 or 7 decimal digits

    // * Double data type has a precision of about 15 decimal digits

    // * Float takes up 4 bytes

    // * Double takes up 8 bytes

    // * It is safer to use double but keep the space taken in mind

    // * We can also represent scientific no. using e(or E)

    float f1 = 12E3; // * This value can also be written as 12e3 and give the same value

    double d1 = 12e3; // * This value can also be written as 12E3 and give the same value

    printf("%f\n",f1); // * This prints 12000

    printf("%lf\n",d1); // * This also prints 12000

    // ! Decimal Precision

    // * Naturally, the printf statement prints out till 6 decimal digits

    // * To control how many decimal digits are printed out, we use the %.<no. of decimal digits to print><f or lf>

    // * This works for both double and float data types

    printf("%.1f\n",f1); // * This will print 12000.0

    printf("%.0lf\n",d1); // * With .0, it prints 12000

    // ! Memory Size and sizeof Operator

    /*  This is the memory taken by each of the data type in C
    int	    2 or 4 bytes
    float	4 bytes
    double	8 bytes
    char	1 byte   */

    // * We can also use sizeof(<the variable corresponding to the data type>) to find out how much space is taken

    printf("%lu\n",sizeof(a)); // * Prints how much bytes is taken by integer data type

    printf("%lu\n",sizeof(b)); // * Prints how much bytes is taken by float data type
    
    printf("%lu\n",sizeof(c)); // * Prints how much bytes is taken by character data type
        
    printf("%lu\n",sizeof(d1)); // * Prints how much bytes is taken by double data type

    // ! The compiler expects long unsigned integer(lu) by the sizeof() operator

    // * That's why %lu is used instead of %i

    // * Though %i can work on some computers but it is better to use %lu

    // ! Data Conversion

    // * Two types as known:

    // * Implicit (Automatic)

    float floa = 9;

    printf("%f\n",floa); // * Prints 9.00000000

    int inte = 9.99;

    printf("%i\n", inte); // * Prints 9

    floa = 5 / 2;

    printf("%f\n",floa); // * Prints 2.000 not 2.5 as the no. by themselves are integers

    // ! Explicit Conversion

    floa = (float) 5 / 2;

    printf("%.1f\n", floa); // * This prints 2.5 as we have converted the no.s itself to float

    // * We can do the same thing for variables

    int v1 = 5;

    int v2 = 2;

    float sum = (float) v1 / v2;

    printf("%.1f\n", sum);

    // ! Constants

    // * We can keep some variables as constants using the const keyword

    // * constant variables don't have their values changed during the run of the program

    // * Variables must always be assigned a value when declaring it as a constant variable(Mandatory)

    // * Syntax: const <data type> <variable name> = <value>;

    const int constant_variable = 60; 

    // ! Boolean Variables

    // * For boolean values in C, we need to import the stdbool.h library

    // * keywords are: true and false

    bool is_true_or_false = true;

    printf("%d\n",is_true_or_false); // * Prints 1 (represents true)

    // * if is_true_or_false = false; it will print 0 (represents false)

    printf("%d\n", 10 == 5); // * Prints 0

    printf("%d\n", 10 >= 5); // * Prints 1

}