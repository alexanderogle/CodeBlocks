#include <iostream>
#include "myClass.h"
using std::cout;
using std::cin;
using std::endl;

myClass::myClass(int a, int b)
:regVar(a),constVar(b)
{
    cout << regVar << "\n";
    cout << constVar << "\n";
    //ctor
}

myClass::test()
{
    cout << "This is a test of function usage...\n";
}

myClass::~myClass()
{
    //dtor
}
