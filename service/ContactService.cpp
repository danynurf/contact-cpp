#include "header/ContactService.hpp"

void ContactService::addContact() {
    string nik;
    string name;
    string no;

    cout << "Masukkan NIK : ";
    cin >> nik;

    cout << "Masukkan Nama : ";
    getline(cin >> ws, name);

    cout << "Masukkan No HP : ";
    cin >> no;

    Contact contact(name, nik, no);
    this->contacts.push_back(contact);
}

void ContactService::showContacts() {
    for(auto contact : this->contacts) {
        cout << contact.getPerson().getName() << endl;
        cout << contact.getNo() << endl;
    }
}