#include "header/Contact.hpp"

Contact::Contact() {}

Contact::Contact(string no):
no(no) {}

string Contact::getNo() {
    return this->no;
}

void Contact::setPerson(Person person) {
    this->person = person;
}

Person Contact::getPerson() {
    return this->person;
}