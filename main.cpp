#include <iostream>
#include "service/header/MenuService.hpp"

int main() {
    MenuService *menu = new MenuService();
    menu->showMenus();
}