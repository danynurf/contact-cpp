#include "header/ContactService.hpp"

ContactService::ContactService() {}

ContactService::ContactService(PersonService* personSrv) {
    this->personSrv = personSrv;
}

void ContactService::addContact() {
    cout << endl << "Tambahkan Kontak" << endl;
    string nik;
    string name;
    string no;

    cout << "Masukkan NIK : ";
    cin >> nik;
    int it = this->personSrv->findIndexByNik(nik);
    if(it == -1) {
        cout << endl << "NIK tidak ditemukan" << endl;
        return;
    }

    Person person = this->personSrv->findPerson(it);
    cout << endl << "NIK ditemukan atas nama : " << person.getName() << endl;
    cout << endl << "Tekan apa saja untuk melanjutkan" << endl;
    cin.ignore();
    cin.get();

    cout << "Masukkan No HP : ";
    cin >> no;

    Contact contact(no);
    contact.setPerson(person);
    this->contacts.push_back(contact);
}

void ContactService::showContacts() {
    cout << endl << "Daftar Kontak" << endl;
    int i = 0;
    for(auto contact : this->contacts) {
        cout << ++i << ".\t" << contact.getPerson().getNik() << endl;
        cout << "\t" << contact.getPerson().getName() << endl;
        cout << "\t" << contact.getNo() << endl;
    }
}