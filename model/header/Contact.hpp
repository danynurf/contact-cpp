#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include "Person.hpp"

using std::string;

class Contact {
private:
    string no;
    Person person;

public:
    Contact();
    Contact(string no);
    string getNo();
    void setPerson(Person person);
    Person getPerson();
};

#endif