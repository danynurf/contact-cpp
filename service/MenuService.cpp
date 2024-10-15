#include "header/MenuService.hpp"

MenuService::MenuService() {
    this->menus = {
        "Add Contact", "Show Contact"
    };
    this->contactSrv = new ContactService();
}

void MenuService::showMenus() {
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