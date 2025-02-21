#include <iostream> // * Header File Library (Essentially we are calling a library for input/output functions)
#include <string> // * Library for manipulation of strings
#include <cmath> // * Library for math functions
#include <ctime> // * Library for time functions
#include <fstream> // * Library for working with files (ALWAYS must be there with <iostream>)

using namespace std; // ? this is a shortcut(?) for cleaner code, main thing this does is prevent name collisons between 2 or more different libraries

/* When not writing line 6,
the output statement becomes:
std::cout << "Whatever here"; */

// * We can declare the function we are going to write right now and keep the function definition after the main() function
// * As normally we write the functions before the main() so there is no confusion when we call the functions in main()
// * With the below statements, we can write what the function should do after the main() that's what I am saying

// * void means nothing to return

void declaringthevariables(); 

void stringstuff();

void mathstuff();

void ifelseifandelsestuff();

void forloopstuff();

void whiledowhilestuff();

void switchstuff();

void arraysstuff();

void structuresstuff();

void enumstuff();

void referencevariablesmemoryaddressesandpointers();

void workingwithfiles();

void trythrowandcatch();

void usingctime();

void f(int x, int y); // * we can declare it like this

void b(string a = "Hello"){
    cout << a << endl;
}

int a(int x, int y){
    return x+y;
}

void swapNums(int &x, int &y) {
    int z = x; // * z is now 10
    x = y; // * x is now 20
    y = z; // * y is now 10
    // * This is basically referencing to change values in a function  
}

void arraytrial(int num[5]){ // * Yes the name must be same
    for (int i = 0;i < 5; i++){
        cout << num[i] << endl;
    }
}

int j(int x, int y){
    return x+y;
}

double j(double x, double y){
    return x+y;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

// ! Global Variables

int x = 5; // * This is a global variable which can be accessed by any function and class and it's value can also be changed in any function or class

void myFunction() {
  // * Local variable with the same name as the global variable (x)
  int x = 22;
  cout << x << endl; // * Refers to the local variable x and this will print 22
}

void myFun(){
    cout << ++x << endl; // * Changes the value of x and then prints the value of x (which will be 6 now)
}

// ! Classes 

class fruits{ // * keyword name{}

    int k; // ! The is a private variable by default as it is not specified under any access specifier

    protected: // * These variables can only used by inherited classes and can't be accessed outside the class

        int j;

    public: // * This is access specifier (Related to encapsulation) which lets us use these variables
        
        string name;
        int fruitno;

        string berr = "Banana";

    // ! Functions inside a Class

    // ! Functions and Constructors are always public (Remember this)

        void hello(){ // * Function inside the class (So this has to be called by any object created by the class)
            cout << "Hello" << endl;
        }

        int hello(int x, int y){ // ! Function overloading
            return x+y;
        }

        void hello(double x, double y);

        // ! Constructors

        // * They will always run when an object is created

        fruits(){ // ! Constructors should always have the same name as that of the class and definition
            cout << "This works" << endl;
        }

        fruits(string x, int y){ // * This is a much faster way to give a object it's values 
            name = x;
            fruitno = y;
        }

    private: // * These variables can't be accessed from outside the class

        int i; // * This won't be able to store any data from any object outside the class

    // ! Encapsulation

    // * This is used to hide sensitive data from end users where they can't access the value of an important variable

    // * To apply encapsulation, we must declare a private variable in the class

    // * To assign a value to a private variable, we must make a setter function, given below (Setter functions must be kept in public)

    // * To see the value of the private variable, we can make a getter function which either returns, prints, etc. for the purpose (Getter functions must also be kept in public)

    public:

        // * Setter function example
        void setvalueofk(int ss){
            k = ss; // * Now k has been assigned a value while being a private variable
        }

        // * Getter function example
        void givevalueofk(){
            cout << k << endl; // * This prints the value of k
        }
    
}; // * Similar to a structure but with more stuff

void fruits::hello(double x, double y){ // * We can put functions of a particular class outside like this (This will be considered public function)
    cout << x+y << endl;
}

// ! Inheritance

// * In C++, it is possible to inherit attributes and methods from one class to another

// * We can inherit from a class using the : symbol

// * class childclassname : public parentclassname{}

class berry: public fruits{
    
    public:
    
        string iberry = "Yes";
        
        // ! Access Specifiers

        // * Just like how we can give and set values of private variables

        // * We can also set and get the values of protected variables (only) from the inherited classes

        void setvalueofprotected(int a){
            j = a;
        }

        void givevalueofprotected(){
            cout << j << endl;
        }
};

// ! Multilevel Inheritance

class subspecies: public berry{}; // * Yes we can initialize classes like this

// ! Multiple Inheritance

// * We can inherit more than one classes at once

// * For this example, I will just create one new class but more than one class can be inherited

class vegetables{
    public:
        void omg(){
            cout << "Yay" << endl;
        }
};

// * We can inherit more than one classes by just adding a comma between each classes (do not forget public keyword)

class food: public fruits, public vegetables{};

// ! Polymorphism

// * Do you remember Function Overloading? That is an example of polymorphism

// * Polymorphism means "Many Forms"

// * It's main implementation is function overloading between the functions of different derived classes(from the same parent class, of course) which can have the same function name but can do different tasks 

// * Example:(I am using vegetable class as base class cause fruits class has a constructor and Vegetable class doesn't)

class brinjal: public vegetables{
    public:
        void omg(){ // * The same name of the function as the one in the base class
            cout << "Brinjal" << endl;
        }
};

class tamatar: public vegetables{
    public:
        void omg(){ // * Same function name
            cout << "Tamatar" << endl;
        }
};

// * I believe so that we can add parameters in any of the functions in each derived class but I am not doing that here

int main(){
    
    cout << "Hello World\n"; // ! C++ doesn't automatically sends cursor to the next line as in Python
    
    cout << "I don't know what to do,\n"; // * That's why \n (in quotes,\n is a escape sequence) or << endl (after quotes) is used

    int op;
    
    cout << "Enter a no: ";
    
    cin >> op; // ! This is how to take input from user and like python the input is given in the above line itself
    
    cout << "This is " << a << endl; // * This will be put in a new line without our help cause it is after cin
        
    string gf;
    
    cout << "Enter text: ";
    
    getline (cin >> ws, gf); // ! This is used for inputting more than one word and the input is asked at the above line itself
    
    cout << "The text is: " << gf << endl;

    // ! Functions Today 

    declaringthevariables(); // * This is how to call a function*/

    f(1,2);

    b("Jiam");

    b(); // * This will print Hello (This type of functions are known as default functions and this can be used for any data types)

    int z = a(1,2);

    // ! I am using int here cause it is the most easiest for me to write but understand that string and double and float data type can also be used in function declaration and passing arguments

    cout << z << endl; // * This prints 3

    cout << a(5,3) << endl; // * This prints 8

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // * Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    int num[5] = {1,2,3,4,5};
    arraytrial(num); // * This is how to pass an array as an argument 

    // ! Function Overloading

    // * These below are the examples of function overloading

    // * Two functions have the same name but different parameters which helps in keeping the code simple

    cout << j(1,2) << endl; // * Integer will be outputed

    cout << j (0.2,0.3) << endl; // * Double will be outputed

    // ! Recursions

    // * It is basically making a function call itself 

    cout << sum(5) << endl;

    // * The above function is the basic example of recursion

    // * Recursion can be used in a very super way if looked into it (So look into it)*/

    fruits Fruit1; // * This is now a object of class fruits

    Fruit1.name = "Apple"; // * We are defining the object
    Fruit1.fruitno = 3;

    fruits Fruit2; // * This is another object of class fruits

    Fruit2.name = "Banana"; // * We are defining object Fruits2
    Fruit2.fruitno = 5;

    cout << "The definition of Fruits1 is:\n"  << Fruit1.name << " and " << Fruit1.fruitno << endl;

    cout << "The definition of Fruits2 is:\n"  << Fruit2.name << " and " << Fruit2.fruitno << endl;

    Fruit1.hello(); // * This will call the function named Hello inside the class

    cout << Fruit1.hello(1,2) << endl; // * This will call the hello function which takes inputs (Function Overloading)

    Fruit2.hello(0.2,0.3); // * Same here

    fruits Fruit3("Orange", 1); // * This won't call the other constructor as function overloading

    cout << Fruit3.name << " and " << Fruit3.fruitno << endl; 

    // ! We can use any object (Fruit1 and Fruit2) to call the functions inside the class 

    // ! Encapsulation

    Fruit1.setvalueofk(100);

    Fruit1.givevalueofk();

    Fruit2.givevalueofk(); // * Random values will be returned

    Fruit3.givevalueofk(); // * Random values will be returned here too

    // * Because we have initialized variable k only in object Fruit1 that it prints 100

    // ! Inheritance
    
    berry banana; // * Initial a object using class berry (The constructor of class fruits will also be executed as this is a inherited class)

    cout << banana.berr << " is " << banana.iberry << endl; // * Object Banana can now access variables of parent class fruits too

    // ! Multilevel Inheritance

    subspecies somefruit; // * As this part of a multilevel inheritance, this can be considered the grandchild of the parent class, that's why the constructor is called from class fruits

    somefruit.hello(); // * Same explanation as above for why we are able the functions and variables of parent and child classes

    // ! Multiple Inheritance

    food q; // * As the fruit class has a constructor, that will run

    q.hello(); // * We can access the functions and variables of class fruit

    q.omg(); // * We can access the functions and variables of class vegetables

    // ! Access Specifiers (Protected Variables)

    berry ob; // * The constructor from parent class will run

    ob.setvalueofprotected(500); // * gives J the value of 500

    ob.givevalueofprotected(); // * prints 500

    // ! Polymorphism

    vegetables vege;

    brinjal brin;

    tamatar tam;

    vege.omg(); // * This will print Yay

    brin.omg(); // * This will print Brinjal

    tam.omg(); // * This will print Tamatar

    // * The above functions work like function overloading, just that the same function name exists in different classes

    // ! File Handling

    workingwithfiles();

    // ! Try, Throw and Catch

    trythrowandcatch();

    // ! Ctime usage

    usingctime();
}

void declaringthevariables(){
    
    int a = 5;
    
    double e = 5.9;
    
    float n = 5.5;
    
    char b = 'D'; // * 'anycharacter' using '' is the only way 
    
    string c = "Hello";
    
    bool d = false;
    
    int s = a + e;
    
    int x,y,z;
    
    x=y=z=5;
    
    int g=5,h=2,j=5;
    
    cout << s;
    
    cout << "\nHey this works: " << s << " :see!\n"; 

    /*Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case-sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names*/

    const int i = 6; // const keyword will not let us change the value of i and most important fact: assign value directly when using const keyword or it will not work
}

void stringstuff(){

    /*There are 2 functions for finding out the length of a string
      First:
      <variablename>.length()
      Second:
      <variablename>.size()
      Both do the same job.*/
    
    // * Unlike Python, in C++ we can change individual characters of a string the way to that is given below

    string c = "Hello";
    
    c[0]='J'; // * To change individual characters, we need to use '' as shown
    
    cout << c << endl;
    
    cout << c.length() << endl;
    
    cout << c.size() << endl; // * This is the same as length() as shown above
}

void mathstuff(){

    cout << "For finding the max no. between two no.: " << max(5,10) << endl;
    
    cout << "For finding the min no. between two no.: " << min(5,10) << endl;
    
    cout << "For finding squareroot of given no.: " << sqrt(25) << endl;
    
    cout << "For giving out the round of a float or double no.: " << round(2.5) << endl; // * This gives 3
    
    cout << "For finding out logarithmic values: " << log(2) << endl;
}

void ifelseifandelsestuff(){

    // ! If, else if and else statements
    
    if (true) {
        cout << "Wow" << endl;
    }

    else if (false){
        cout << "Very" << endl;
    }

    else {
        cout << "Noice" << endl;
    }
}

void forloopstuff(){

    // ! For loops

    for(int i = 0; i <= 5; i++) {
        cout << i << endl;
        if (i==3){
            break;
        }
        else{
            continue;
            cout << "This won't print" << endl;
        }

    }
}

void whiledowhilestuff(){

    // ! While and do while statements

    int hg = 0;

    while (hg <= 5){
        cout << hg << endl;
        hg++;
    }

    do{
        cout << hg << endl;
        hg++;
    }
    while(hg <= 10);
}

void switchstuff(){

    // ! Switch statements 

    int day = 1;

    switch (day){
        case 1:
        cout << "YAY" << endl;
        break;
        case 2:
        cout << "WOW" << endl;
        break;
        default:
        cout << "Noice" << endl;
    }
}

void arraysstuff(){

    // ! Arrays

    int num[4] = {1,2,3,4}; // The format of making a array for this example we can't add more than 4 elements to this array as num[4]
    
    cout << num << endl; // This prints location of the array

    for (int hg = 0;hg < 4;hg++){

        cout << num[hg] << endl; // * This prints all the elements and as all the elements are not filled in the array, it prints the last element as zero

    } // ! Random no. will be printed if we try to print out of bounds of the array

    string str[4] = {"Lol","WOow","Noice","Yay"};

    for (int hg : num){
        cout << hg << endl; // * Another way to print all elements in a array
    }

    string g[4];
    g[0] = "hey";
    g[1] = "this";
    g[2] = "works";
    g[3] = "Noice";
    g[4] = "Lol"; // * This won't print

    for (string ab : g){
        cout << ab << endl;
    }

    // * Now there exists no function to directly figure out the size of an array like other languages
    
    // * There exists a function known as sizeof(), it returns the !space! of the array not the no. of elements in it at the present time

    // * int data type takes 4 bytes of space

    // * Knowning the above information we can do this: sizeof(<name of arrage>)/4

    // * The above statement gives us the size of the array

    // * sizeof(int) gives us 4 (as int takes 4 bytes for bytes of storage)

    // * sizeof(<datatype>) for different data types of arrays

    cout << sizeof(num)/4 << endl;

    // ! Multidimensional Array

    int mul[2][4] = { // * First [] -> No. of elements, Second [] -> No. of elements in another {}
        {1,2,3,4},
        {1,2,3,4}
    };

    int mul2 [2] [2] [2] = { // * First [] -> No. of elements, Second [] -> No. of elements in another {}, Third [] -> No. of elements in another {} which is inside Second{}
        {
            {1,2},
            {3,4}
        },
        {
            {5,6},
            {7,8}
        }
    };

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            cout << mul[i][j] << endl;
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                cout << mul2[i][j][k] << endl;
            }
        }
    }
}

void structuresstuff(){
    
    // ! Structures (struct)

    // * Today is a day for structs, What are structs? What do we use them for?,etc can be found here: https://www.w3schools.com/cpp/cpp_structs.asp

    // * How to create it I am going to write down here

    // * This is a unnamed Structure

    struct { // * keyword to form a structure
        int model; // * member variables in a structures
        int year;
        string name;
    } Structure; // * This variable can be used to access all other variables as given below

    Structure.model = 1;
    Structure.name = "Hamza"; // * Basically we are creating objects here
    Structure.year = 2024;

    cout << Structure.model << endl;

    cout << Structure.name << endl;

    cout << Structure.year << endl;

    // * An example from W3Schools of how this this works with more structure variables

    struct {
    string brand;
    string model;
    int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    // * We can also name a structure like a function and create objects as given below

    struct lol{
        string nam;
        int ag;
    }; // ! Yes we have to put ; after brackets

    lol f;

    f.nam = "Thory";
    f.ag = 23;

    lol g; // * This is a variable

    g.nam = "Jav";
    g.ag = 22;

    cout << f.nam << endl; // * Thory will be printed
    cout << f.ag << endl; // * 23 will be printed

    cout << g.nam << endl; // * Jav will be printed
    cout << g.ag << endl; // * 22 will be printed
}

void enumstuff(){

    // ! ENUMS TIME BOIS

    // ? What is a enum?
    // * An enum is a special type that represents a group of constants (unchangeable values).

    // Example:

    enum L{ // ! Enum keyword is of course important
        a, // Separated by commas, not like structs 
        b,
        c
    }; // ! yes here to we have to put a ; at the end

    // ? By default the value of variable a will be 0
    // b will be 1
    // c will be 2

    // * To access the enum values

    enum L mygawd = b;

    cout << mygawd << endl; // * This will print 1

    enum LL{ // * Another example of enums
        aa = 5,
        bb, // * Now b will be 6 
        cc // * Now c will be 7
    };

    enum Lo{
        aaa = 5,
        bbb = 9, // * Individual values can also given
        ccc = 24
    };
    
    enum Lo mup = bbb;

    cout << mup << endl; // * 9 will be printed

    /*Enums are used to give names to constants, which makes the code easier to read and maintain.

    Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.*/
}

void referencevariablesmemoryaddressesandpointers(){
    
    // ! References today

    // ! A reference variable provides a new name to an existing variable.

    /*It cannot be changed to refer another variable and should be initialized at the time of declaration and cannot be NULL. The operator '&' is used to declare reference variable.*/

    string food = "Pizza";

    string &meal = food;

    cout << meal << endl; // * Prints Pizza

    food = "Pasta";

    cout << meal << endl; // * Prints Pasta

    // * meal variable is the copycat of the food it changes as the value of food variable changes

    // ! Memory Addresses

    cout << &food << endl; // * Prints the location of the food variable

    cout << &meal << endl; // * Prints the same as above as meal is a copycat (my assupmtion is that it becomes the same variable but we have a different name)

    meal = "Paneer";

    cout << food << endl; // * Prints Paneer

    cout << meal << endl; // * Prints Paneer

    // ! Above statements prove that changing value in any one variable will change the value of other

    // * I guess food and meal have the same memory address that's why 

    // ! Pointers BOI

    // * Pointers are basically variables who are able to store memory addresses     

    string* ptr = &food;

    cout << ptr << endl; // * This will give the same values as the above two variables which is the memory address

    cout << *ptr << endl; // * This variable prints the value of food (Which is righ now Paneer)

    // * cout << &"a" << endl; This is a test, I wanted to check how memory addresses work

    // * Variables are containers for storing data, so does each new variable(reference variables not in this category) have a new memory address?

    *ptr = "Peas";

    cout << food << endl; // * This becomes Peas

    cout << meal << endl; // * So does this

    cout << *ptr << endl; // * So does this

    cout << ptr << endl; // * This memory address stays the same as only the value is changed not the variable itself
}

void f(int x, int y){
    cout << x+y << endl;
}

void workingwithfiles(){

    // ! File Handling
    
    ofstream newfile("wow.txt"); // * This will create and open a text file

    newfile << "Hello Everybody"; // * This will write on the file

    newfile.close(); // * Close the file

    string a;

    ifstream reading("wow.txt"); // * Reading from a text file

    while(getline(reading, a)){ // * How to read multiple lines from the text files
        cout << a << endl;
    }

    reading.close(); // * Close the files
}

void trythrowandcatch(){

    // ! Try, Throw and Catch

    // * This is the same as try and except blocks in Python

    // * The definations for each keyword (Taken from W3Schools) are here:

    // * The try statement allows you to define a block of code to be tested for errors while it is being executed.

    // * The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

    // * The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

    // ! Try and Catch always comes in pairs

    // * Example Code

    try{
        string fruit = "Banana";
        string f;
        cout << "Enter a fruit:" << endl;
        getline(cin >> ws, f);
        if (f == fruit){
            cout << "Correct Fruit!" << endl;
        }
        else{
            throw(f); // * We can also throw custom errors by using throw 5005 or any other no. if we don't need to use the string in the catch block
            // * Don't forget to use ... if you are using custom no. as it will not waste memory then
        }
    }

    catch (string a){
        cout << "No the fruit should be Banana, not " << a << endl;
    }

    // * If we don't want to output the value of throw, just put ... instead of string a (inside the parenthesis besides catch)

    // * ... will accept any data type, Just that you won't be able to access or use it
}

void usingctime(){

    // ! Getting timestamp for current date and time

    time_t timestamp; // * time_t is a real arithmetic data type capable of representing times

    time(&timestamp); // * Writes a timestamp to the given memory location given by the parameter(timestamp) but it also returns the given value (for some reason)

    // * So a better way to use time() function is to pass in a NULL pointer and use the return value instead

    timestamp = time(NULL);

    // * Display the date and time represented by the timestamp

    cout << ctime(&timestamp); // * Don't add endl after this as it will go to the next line by it self

    cout << timestamp << endl; // * Random no. are printed (from what logic, idk)

    // ! There are two different data types to store date and time

    // * time_t for timestamps

    // * sturct tm for datetime structures 

    // * Timestamps represent a moment in time as a single number, which makes it easier for the commputer to do calculations

    // * Datetime structures are sturctures that represent different components of the date and time as members which makes it easier for specifying dates

    /*tm_sec - The seconds within a minute
    tm_min - The minutes within an hour
    tm_hour - The hour within a day (from 0 to 23)
    tm_mday - The day of the month
    tm_mon - The month (from 0 to 11 starting with January)
    tm_year - The number of years since 1900
    tm_wday - The weekday (from 0 to 6 starting with Sunday)
    tm_yday - The day of the year (from 0 to 365 with 0 being January 1)
    tm_isdst - Positive when daylight saving time is in effect, zero when not in effect and negative when unknown
    */

    // * Hours are represented in 24-Hour format

    // * Months go from 0 to 11. January is 0 and December is 11.

    // * Years are represented relative to the year 1900. 2024 is represented as 124 because 124 years have passed since 1900

    // ! Creating Timestamps

    // * time() can create timestamp for only current date

    // * mktime() can create timestamp for any date

    // * mktime() converts a datetime structure into a timestamp

    struct tm datetime;
    time_t timestam;

    datetime.tm_year = 2024 - 1900; // * Number of years since 1900
    datetime.tm_mon = 12 - 1; // * Number of months since January
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    // * Daylight Savings must be specified
    // * -1 uses the computer's timezone setting
    datetime.tm_isdst = -1;

    timestam = mktime(&datetime);

    cout << ctime(&timestam);

    // ! The mktime() function needs these members to have a value: tm_year, tm_mon, tm_mday, tm_hour, tm_min, tm_sec and tm_isdst
}