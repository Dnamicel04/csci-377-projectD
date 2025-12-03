#include <iostream>
#include "Account.h"

int main(){

    std::cout<<"This is a test!"<<std::endl;

    Account p1("Henry", 40, 25.50, 2000.70);

    p1.printPerson();

    return 0;


    // will need a switch statement for user to decide actions
}