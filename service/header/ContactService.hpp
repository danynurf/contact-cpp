#ifndef CONTACT_SERVICE_HPP
#define CONTACT_SERVICE_HPP

#include <iostream>
#include <vector>
#include <string>
#include "../../model/header/Contact.hpp"
#include "../../model/header/Person.hpp"
#include "PersonService.hpp"

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
    PersonService* personSrv;

public:
    ContactService();
    ContactService(PersonService* personSrv);
    void addContact();
    void showContacts();
};

#endif