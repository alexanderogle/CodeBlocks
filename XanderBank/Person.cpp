#include "Person.h"
using namespace std;
#include <string>

Person::Person(int thisAge, string thisName)
:age(thisAge), name(thisName)
{
    //ctor
}

Person::returnAge()
{
    return age;
}

Person::~Person()
{
    //dtor
}
