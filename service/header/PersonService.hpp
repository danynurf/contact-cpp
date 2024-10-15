#ifndef PERSON_SERVICE_HPP
#define PERSON_SERVICE_HPP

#include <iostream>
#include <vector>
#include "../../model/header/Person.hpp"

using std::cout;
using std::cin;
using std::vector;

class PersonService {
private:
    vector<Person> persons;

public:
    PersonService();
    Person findPerson(int idx);
    int findIndexByNik(string nik);
};

#endif