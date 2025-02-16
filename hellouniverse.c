#include <stdio.h> // * stdio.h is a header file library which lets us use input and output functions in C

#include <stdbool.h> // * stdbool.h is called for us being able to use boolean values

#include <string.h> // * string.h is called for us to use the functions related to strings

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

    // ! Conditional Statements

    // * They contain:

    // ! if - else - else if 

    // * Syntax is a little different but does the same thing as in other programming languages 
    
    int for_if_statements = 10;

    if (for_if_statements != 10){

        printf("Yes\n");

    }
    else if (for_if_statements == 10){

        printf("No\n");

    }
    else{

        printf("Wait\n");
        
    }

    // ! There is also short hand conditional statements

    // * Syntax: variable = (condition) ? TrueThisThingWillBeRun : FalseThisThingWillBeRun;

    (10==10) ? printf("This is True\n") : printf("This is False\n") ;

    // ! Switch Statements

    // * Used with cases and default statements for 1 value

    int for_switch = 5;

    switch (for_switch){

    case 1:

        printf("1\n");

        break; // * Break statements are used so that execution doesn't spill over to other cases after running this

    case 2: // * 1,2 & 3 represent conditions which for_switch should be equal to so that the particular case runs
        
        printf("2\n");

        break;

    case 3:

        printf("3\n");

        break;

    default:// * Runs if the above cases are not executed, should always be kept at the last

        printf("This is not 1, 2 or 3\n");
    }

    // ! while & do-while Loops

    // * Looping structures

    // * Syntax: while(condition){}

    int for_while_and_do_while = 0;

    while (for_while_and_do_while < 10)
    {
        printf("%d\n", for_while_and_do_while);

        for_while_and_do_while++; // * We keep this as part of the code so that the while loop doesn't slip into an infinity loop
    }

    // * Above code will not run if the condition is not met in the first place

    // * So if you want the code to run at least once, use do-while loop 
    
    do
    {

        printf("%d\n",for_while_and_do_while);

        // for_while_and_do_while++; // ! It won't go into infinite loop even without this statement

    } while (for_while_and_do_while<10);

    // ! For Loop

    // * One of the Looping constructs in For Loop

    // * Syntax: for(variable;condition;step){}

    for (int for_for_loop = 10; for_for_loop > 0; for_for_loop--)
    {
        
        printf("%d\n",for_for_loop);

    }

    // * We can use for loop also for nested loops

    for (int i = 0; i < 5; i++) // * This sets the no. of rows for the pattern
    {

        for (int j = 0; j < i+1; j++) // * This sets the no. of columns for the pattern
        {

            printf("*");

        }

        printf("\n");

    }

    // ! Break and Continue

    // * Break is used to break out from any looping constructors

    for (int for_break = 0; for_break < 6; for_break++)
    {

        if(for_break == 3){ // * Numbers from 3 are printed

            break;

        }

        printf("%d\n",for_break);

    }
    
    // * Continue is used to pass all the statements after it and go to the next step of the loop variable

    for (int for_continue = 0; for_continue < 6; for_continue++)
    {

        if(for_continue == 3){ // * 3 is the only no. not printed

            continue;

        }

        printf("%d\n",for_continue);

    }

    // ! Arrays

    // * In C, we have arrays who only accept similar data types

    // * int mixed with float or decimal are not allowed as they are different data types

    int arrays[] = {1,2,3,4,5}; // * Example on how arrays are made

    printf("Printing of particular element: %d\n",arrays[3]); // * Prints 4

    arrays[3] = 34;
    
    printf("Showing change of value: %d\n",arrays[3]); // * The value at index 3 is changed

    for (int for_looping_through_arrays = 0; for_looping_through_arrays < 5; for_looping_through_arrays++)
    {
        
        printf("%d\n",arrays[for_looping_through_arrays]);

    }

    // * We can set the size of the array beforehand too

    // * It's useful when you already know the no. of elements to add into the array

    // * You can't change the size of the array after creation

    int array[5];

    array[0] = 0;

    array[1] = 1;
    
    array[2] = 2;
    
    array[3] = 3;
    
    array[4] = 4;

    array[5] = 5; // * This leads to error(allegedly it doesn't)

    array[6] = 7;

    printf("For Specific Memory Array: %d\n",array[6]); // * This is supposed to throw an error but it doesn't

    // TODO Why is no error being thrown even when we go above the limit of memory specified for the arrray

    // * Yea, the no. is not present in the array when we loop over it and the array doesn't increase in length

    // * Speaking of length, Let's see how to find length of an array

    // * We know, sizeof gets us how much memory something takes

    // * If we do sizeof for an array, it shows us the total memory size of the array
    
    // * So we do sizeof an array and divide it by sizeof of any element present in the array(as array contain only same data type)

    int length_of_arrays = sizeof(arrays) / sizeof(arrays[0]);

    printf("The length of the array is: %d\n",length_of_arrays);

    // * And it's better to find length and then loop thorugh the array

    // ! Multi-Dimensional Arrays

    // * We can make multi-dimensional arrays on C

    // * data_type name[no. of rows][no. of columns] = {{}};

    int multidimensional[2][2] = { {1, 2}, {3, 4}};

    multidimensional[0][0] = 4;

    printf("The Value has changed from %d\n", multidimensional[0][0]);

    for(int for_multi = 0; for_multi < 2; for_multi++){

        for (int multimulti = 0; multimulti < 2; multimulti++)
        {
            
            printf("%d\n",multidimensional[for_multi][multimulti]);

        }

    }

    // ! Strings

    // * Strings in C are just glorified characters in arrays

    char first_string[] = "First One Here";

    // * There is no other data type for string

    // * String is just a array of characters as said before

    printf("The string is: %s\n", first_string); // * %s is used to print the whole array

    // * For accessing the individual characters, we use the %c

    printf("The individual value is: %c\n", first_string[0]); // * %s doesn't print anything and stops everything else to print

    // * Strings are mutable

    first_string[0] = 'S';

    printf("Changed string is: %s\n", first_string);

    int length_of_first_string = sizeof(first_string) - 1; // * The terminating null character is ignored

    for (int loopingthroughfirststring = 0; loopingthroughfirststring < length_of_first_string; loopingthroughfirststring++)
    {

        printf("%c\n", first_string[loopingthroughfirststring]);

    }
    
    // * Length of string is always +1 & that is because there is \0 at the end

    // * \0 is known as the null terminating character which is always included in every string and tells C that that is the end of the string

    printf("%lu\n", length_of_first_string); // * \0 is included as another string character
    
    // * We can create strings in a other way too
    
    char second_string[] = {'S', 'e', 'c', 'o', 'n', 'd', '\0'};
    
    // * If not repeated, the printf statement in the next line will continue from same line when printing the string

    printf("%s\n", second_string);

    // * There is no difference in length between from the above string and normally created string
    
    // ! Special Characters in String

    // * Just like the \0 is a special character, there are other such characters in C

    // * Like the \n(newline), \\(backslash), \'(singlequote), \" (To put double quotes), \t(for tab space)

    char for_example_of_special_characters[] = "\"It\'s me\",\tshe said";

    printf("%s\n", for_example_of_special_characters);

    // ! String Functions

    // * int variable = strlen(variable) This gives the length of the string
    
    char strlenexample[20] = "ABC";

    printf("sizeof prints the memory taken like so: %lu\n", sizeof(strlenexample));

    printf("strlen prints the size of the actual string without taking in account of \\0 like so: %d\n", strlen(strlenexample));

    // * strcat(string where the whol thing will be stored, string whose value will be concatenated)

    char string1[20] = "A"; // * If the space is not specified, it will give a bufferflow error

    char string2[] = "B";

    strcat(string1, string2); // * the first variable should have space which should accomodate the string of the other string too or else bufferflow error

    printf("Concatenated string: %s\n", string1);

    // * strcpy(string that's wants the copied content, string that has the content)

    char strcop1[20] = "Hello";

    char strcop2[20];

    strcpy(strcop2, strcop1);

    printf("The copied string is now: %s\n",strcop2);

    // * int variable = strcmp(string1, string2) returns 0 if they are equal or anyother no. if not equal

    char com1[] = "Hello";

    char com2[] = "Hello";

    char com3[] = "Hell";

    printf("Comparing first and second strings: %d\n", strcmp(com1, com2));

    printf("Comparing first and third strings: %d\n", strcmp(com1, com3));

    printf("Comparing second and third strings: %d\n", strcmp(com2, com3));
}