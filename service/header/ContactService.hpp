#ifndef CONTACT_SERVICE_HPP
#define CONTACT_SERVICE_HPP

#include <iostream>
#include <vector>
#include <string>
#include "../../model/header/Contact.hpp"

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::getline;
using std::ws;
using std::endl;

class ContactService {
private:
    vector<Contact> contacts;

public:
    void addContact();
    void showContacts();
};

#endif