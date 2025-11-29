#include <iostream>
#include "Person.h"

int main(){

    std::cout<<"This is a test!"<<std::endl;

    Person p1("Henry", 404, 25.50);

    p1.printPerson();

    return 0;

}