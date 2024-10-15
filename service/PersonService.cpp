#include "header/PersonService.hpp"

PersonService::PersonService() {
    Person person1("Dany", "3328");
    Person person2("Siapa", "3327");
    this->persons = {
        person1, person2
    };
}

Person PersonService::findPerson(int idx) {
    return this->persons.at(idx);
}

int PersonService::findIndexByNik(string nik) {
    for (int i = 0; i < this->persons.size(); i++){
        Person person = this->persons.at(i);
        if(person.getNik() == nik) {
            return i;
        }
    }
    return -1;
}