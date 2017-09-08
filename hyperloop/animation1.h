#ifndef ANIMATION1_H
#define ANIMATION1_H
// Two lines below allow strings to be used
using namespace std;
#include <string>

class animation1
{
    public:
        animation1();
        run();
        setLoops(int theseLoops);
        printSpaces(int numSpaces);
        typeText(string thisText, int delay);
        decayLeft(string thisString, int delay);
        runawaySymbols();
        virtual ~animation1();
    protected:

    private:
        int loops;
};

#endif // ANIMATION1_H
