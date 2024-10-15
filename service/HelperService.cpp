#include "header/HelperService.hpp"

int HelperService::inputNum(string message, int max) {
    int choosen;
    do {
        cout << message;
        printf(" (1-%d) : ", max);
        cin >> choosen;
    } while(choosen < 1 || choosen > max);
    return choosen;
}