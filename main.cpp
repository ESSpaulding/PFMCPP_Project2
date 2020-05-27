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
 bool
 double
 float
 char
 unsigned int
 
 this is an example of a change that you haven't pulled in yet.
 
 
 
 
 
 
 
 
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
    int counter = 0; 
    int people = 6;
    int tries = 10;
    bool flag = 0;
    bool check = false;
    bool signBit = 1;
    float grade = 99.5f;
    float degrees = 23.5f;
    float input = 0.001f;
    char initial = 'a';
    char alphabetSoup = 'm';
    char question = 'Q';
    unsigned int peak = 10;
    unsigned int positiveOnly = 1;
    unsigned int rectifier = 100;
    double timeLine = -100.003;
    double blackHole = -29687543.001;
    double antiGravity = 9999999999.99;

    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(counter);
    ignoreUnused(people);
    ignoreUnused(tries);
    ignoreUnused(flag);
    ignoreUnused(check);
    ignoreUnused(signBit);
    ignoreUnused(grade);
    ignoreUnused(degrees);
    ignoreUnused(input);
    ignoreUnused(initial);
    ignoreUnused(alphabetSoup);
    ignoreUnused(question);
    ignoreUnused(peak);
    ignoreUnused(positiveOnly);
    ignoreUnused(rectifier);
    ignoreUnused(timeLine);
    ignoreUnused(blackHole);
    ignoreUnused(antiGravity);
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
double totalScore(float testOne, float testTwo, float testThree)
{
    ignoreUnused(testOne, testTwo, testThree);
    return {};
}
/*
 2)
 */
bool itIsHeads(int odds, int flips, int luck = 0)
{
    ignoreUnused(odds, flips, luck);
    return {};
}
/*
 3)
 */
int sumOfDice(int rollOne, int rollTwo, int rollThree, int rollFour)
{
    ignoreUnused(rollOne, rollTwo, rollThree, rollFour);
    return {};
}
/*
 4)
 */
unsigned int absoluteValueOf(int peak, int average, int crest)
{
    ignoreUnused(peak, average, crest);
    return {};
}
/*
 5)
 */
float streamIn(float channel1, float channel2, float channel3 = 0.0f, float channel4 = 0.0f)
{
    ignoreUnused(channel1, channel2, channel3, channel4);
    return {};
}
/*
 6)
 */
bool itIsMetal(bool loudGuitars, bool screaming, bool blastBeats, bool makesMeAnxious = true)
{
    ignoreUnused(loudGuitars, screaming, blastBeats, makesMeAnxious);
    return {};
}
/*
 7)
 */
int counter(int i, int x, int f = 0)
{
    ignoreUnused(i, x, f);
    return {};
}
/*
 8)
 */
void function()
{
   // ;)
}
/*
 9)
 */
int motorParts(int pistons, bool overheadCamShaft, int intakeValves, int exhaustValves)
{
    ignoreUnused(pistons, overheadCamShaft, intakeValves, exhaustValves);
    return {};
}
/*
 10)
 */
char numberToCharacterConverter(int number)
{
    ignoreUnused(number);
    return {};
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

int main(void)
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto averageScore = totalScore(87.5f, 77.1f, 68.7f);
    
    //2)
    auto coinFlip = itIsHeads(5, 6);
    //3)
    auto sumOfAllRolls = sumOfDice(3, 3, 6, 1);
    //4)
    auto fullWaveRectifier = absoluteValueOf(88, 75, 3);
    //5)
    auto lastStreamIn = streamIn(0.125f, 0.2452f);
    //6)
    auto itIsNoise = itIsMetal(true, true, true);
    //7)
    auto increment = counter(0, 0);
    //8)
    function();   // I'm calling the function that has no return value, so I can't assign it?
    //9)
    auto typeOfMotor = motorParts(8, true, 16, 8);
    //10)
    auto secretDecoder = numberToCharacterConverter(26);
    
    ignoreUnused(carRented);
    ignoreUnused(averageScore);
    ignoreUnused(coinFlip);
    ignoreUnused(sumOfAllRolls);
    ignoreUnused(fullWaveRectifier);
    ignoreUnused(lastStreamIn);
    ignoreUnused(itIsNoise);
    ignoreUnused(increment);
    ignoreUnused(typeOfMotor);
    ignoreUnused(secretDecoder);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
