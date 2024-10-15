#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

using std::string;

class Person {
private:
    string name;
    string nik;

public:
    Person();
    Person(string name, string nik);
    string getName();
    string getNik();
};

#endif