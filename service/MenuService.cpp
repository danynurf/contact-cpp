#include "header/MenuService.hpp"

MenuService::MenuService() {
    this->menus = {
        "Add Contact", "Show Contact"
    };
    this->helperSrv = new HelperService();
    this->personSrv = new PersonService();
    this->contactSrv = new ContactService(this->personSrv);
}

void MenuService::showMenus() {
    cout << endl << "App Pengelola Kontak" << endl;
    int i = 0;
    for(string menu : this->menus) {
        cout << ++i << ". " << menu << endl;
    }
    int menu = this->helperSrv->inputNum("Pilih menu", this->menus.size());
    this->redirectTo(menu);
}

void MenuService::redirectTo(int menu) {
    switch (menu) {
    case 1:
        this->contactSrv->addContact();
        break;
    case 2:
        this->contactSrv->showContacts();
        break;
    default:
        break;
    }
    this->showMenus();
}