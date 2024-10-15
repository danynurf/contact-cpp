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
    Contact(string name, string nik, string no);
    string getNo();
    Person getPerson();
};

#endif