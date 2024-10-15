#include "header/Contact.hpp"

Contact::Contact() {}

Contact::Contact(string name, string nik, string no):
person({name, nik}), no(no) {}

string Contact::getNo() {
    return this->no;
}

Person Contact::getPerson() {
    return this->person;
}