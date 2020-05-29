#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 char
 double
 float
 long
 void
 bool
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int number1 = 3;
    int number2 = 4;

    char chr = 'a';
    char chr1 = 'b';
    char chr2 = 'c'; 

    double dNumber = 5.0;
    double dNumber1 = 6.0;
    double dNumber2 = 7.0; 
    
    float fl = 8.0f;
    float fl1 = 9.0f;
    float fl2 = 10.0f; 

    long ld = 8.0;
    long ld1 = 9.0;
    long ld2 = 10.0; 

    bool tf = true;
    bool tf1 = false;
    bool tf2 = false;
 
    ignoreUnused(number, number1, number2, chr, chr1, chr2, dNumber, dNumber1, dNumber2, fl, fl1, fl2, ld, ld1, ld2, tf, tf1, tf2);
     //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int addTwoNumbers(int a, int b)
{
    ignoreUnused(a, b);
    return {};
}
/*
 2)
 */
char numToASCII(int num)
{
    ignoreUnused(num);
    return {};
}
/*
 3)
 */
bool checkIfEqual(int a, int b)
{
    ignoreUnused(a, b);
    return {};
}
/*
 4)
 */
void walk(int numStepsX, int numStepsY, int speed = 100)
{
    ignoreUnused(numStepsX, numStepsY, speed);
}
/*
 5)
 */
bool characterMatch(char a, char b, char c = 'c')
{
    ignoreUnused(a, b, c);
    return {};
}
/*
 6)
 */
double findHighestNumber(double a, double b)
{
    ignoreUnused(a, b);
    return {};
}
/*
 7)
 */
void makeSound(int volume, int pitch)
{
    ignoreUnused(volume, pitch);
}

/*
 8)
 */
int counter(int increment, int limit, int start)
{
    ignoreUnused(increment, limit, start);
    return {};
}
/*
 9)
 */
long findLowestNumber(long a, long b, long c, long d, long e = 100000000)
{
    ignoreUnused(a, b, c, d);
    return {};
}
/*
 10)
 */
void writeToScreen(char chrToWrite, int fontSize)
{
    ignoreUnused(chrToWrite, fontSize);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    int result = addTwoNumbers(1,5);
    //2)
    char asciiChr = numToASCII(97);
    //3)
    bool check = checkIfEqual(1, 1);
    //4)
    walk(10,15);
    //5)
    bool checkMatch = characterMatch('z', 'a');
    //6)
    double highNum = findHighestNumber(10.21, 894.1);
    //7)
    makeSound(100, 440);
    //8)
    int counterResult = counter(5, 100, 0);
    //9)
    long lowNum = findLowestNumber(100000, 237242873, 666, 5972);
    //10)
    writeToScreen('g', 15);
    
    ignoreUnused(carRented, result, asciiChr, check, checkMatch, highNum, counterResult, lowNum);
    std::cout << "good to go!" << std::endl;

    return 0;    
}
