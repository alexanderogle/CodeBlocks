#ifndef PERSON_H
#define PERSON_H
// Need the two lines below in order to use strings
#include <string>


class Person
{
    public:
        Person(int age, std::string name);
        virtual ~Person();
        returnAge();

    protected:

    private:
        int age;
        std::string name;
};

#endif // PERSON_H
