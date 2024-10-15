#ifndef MENU_SERVICE_HPP
#define MENU_SERVICE_HPP

#include <iostream>
#include <vector>
#include "HelperService.hpp"
#include "ContactService.hpp"

using std::string;
using std::vector;
using std::cout;
using std::endl;

class MenuService {
private:
    vector<string> menus;
    HelperService* helperSrv;
    ContactService* contactSrv;

public:
    MenuService();
    void showMenus();
    void redirectTo(int menu);
};

#endif