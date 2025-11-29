#include "Person.h"
#include <iostream>

// Empty constructor
Person::Person(){}

// Destructor (if needed)
Person::~Person(){}

// Constructor
Person::Person(std::string newName, int newAccNum, double newBal){
    setName(newName);
    setAccNum(newAccNum);
    setBalance(newBal);
}

std::string Person::getName() const{
    return name;
}

int Person::getAccNum() const {
    return accNum;
}

double Person::getBalance() const {
    return balance;
}

void Person::setName(std::string newName){
    name = newName;
}

void Person::setAccNum(int newAccNum){
    accNum = newAccNum;
}

void Person::setBalance(double newBal){
    balance = newBal;
}

void Person::printPerson(){
    std::cout << "Account Number: " << accNum << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Balance: " << balance << std::endl;
    std::cout << "= = = = =" << std::endl;
}

