#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include "animation1.h"

animation1::animation1()
{
    loops = 1;
    //ctor
}

animation1::run()
{
    for(int i = 0; i < loops; i++)
    {
        std::cout << "\n";
        printSpaces(10);
        std::cout << "+";
        Sleep(1000);
        system("CLS");
        std::cout << "\n";
        printSpaces(10);
        std::cout << "-";
        Sleep(1000);
        system("CLS");
    }
}

animation1::setLoops(int theseLoops)
{
    loops = theseLoops;
}

animation1::~animation1()
{
    //dtor
}

animation1::runawaySymbols()
{

}

animation1::typeText(string thisText, int delay)
{
    // Print out text using a for loop and a set delay
    for(int i = 0; i < thisText.size(); i++)
    {
        //Print out each character of the string with a delay between
        cout << thisText.substr(i, 1);
        Sleep(delay);
    }
}

animation1::decayLeft(string thisString, int delay)
{
    // Decay a given string to the left until the string is empty.
    int stringSize = thisString.size();
    for(int i = 0; i < stringSize; i++)
    {
        // Print out the string using the typeText method
        typeText(thisString, delay);
        cout << "\n";
        // Make thisString into a smaller substring of itself
        // Beginning with whatever iteration of the for loop
        // we're at until the end of the string (given by size())
        thisString = thisString.substr(1,thisString.size());
    }
}

animation1::printSpaces(int numSpaces)
{
    for(int i = 0; i < numSpaces; i++)
    {
        std::cout << " ";
    }
}
