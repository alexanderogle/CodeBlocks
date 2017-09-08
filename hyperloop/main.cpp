#include <iostream>
#include <windows.h>
#include <stdlib.h>

#include "animation1.h"
#include "thisClass.h"

using namespace std;

int main()
{
    // We'll create an animation object
    animation1 animation;
    /*
    animation.typeText("ENTER THE HYPERLOOP\n",100);
    animation.typeText("NTER THE HYPERLOOP\n", 10);
    animation.typeText("TER THE HYPERLOOP\n", 10);
    animation.typeText("ER THE HYPERLOOP\n", 10);
    animation.typeText("R THE HYPERLOOP\n", 10);
    animation.typeText(" THE HYPERLOOP\n", 10);
    animation.typeText("THE HYPERLOOP\n", 10);
    animation.typeText("HE HYPERLOOP\n", 10);
    animation.typeText("E HYPERLOOP\n", 10);
    animation.typeText(" HYPERLOOP\n", 10);
    animation.typeText("HYPERLOOP\n", 10);
    animation.typeText("YPERLOOP\n", 10);
    animation.typeText("PERLOOP\n", 10);
    animation.typeText("ERLOOP\n", 10);
    animation.typeText("RLOOP\n", 10);
    animation.typeText("LOOP\n", 10);
    animation.typeText("OOP\n", 10);
    animation.typeText("OP\n", 10);
    animation.typeText("P\n", 10);
    animation.typeText("\n", 10);
    */
    for(int i = 0; i < 50; i++)
    {
        animation.decayLeft("ENTER THE HYPERLOOP", 10);
    }
    animation.setLoops(3);
    //animation.run();
}
