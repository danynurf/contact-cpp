#include "header/Person.hpp"

Person::Person() {}

Person::Person(string name, string nik) {
    this->name = name;
    this->nik = nik;
}

string Person::getName() {
    return this->name;
}

string Person::getNik() {
    return this->nik;
}