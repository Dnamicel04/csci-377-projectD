#include "Account.h"
#include <iostream>
// Empty constructor
Account::Account() {
srand(time(0)); 
 name = " ";
 accNum = (std::rand() % 100) + 10; // random id # from 10 - 99
 total = 0.0;
 checking= 0.0; 
 savings = 0.0; 
}

// Destructor (if needed)
Account::~Account(){}

// Constructor
Account::Account(std::string newName, int newAccNum, double newCheck, double newSavings){
    setName(newName);
    setAccNum(newAccNum); // if accNum isn't double digit, to say invalid?
    setChecking(newCheck);
    setSavings(newSavings);
}

std::string Account::getName() const{
    return name;
}

int Account::getAccNum() const {

    return accNum;
}

double Account::getTotal() const{
    return total;
}

double Account::getChecking() const {
    return checking;
}

double Account::getSavings() const {
    return savings;
}

void Account::setName(std::string newName){
    name = newName;
}

void Account::setAccNum(int newAccNum){
    accNum = newAccNum;
}

void Account::setChecking(double newCheck){
    checking = newCheck;
}

void Account::setSavings(double newSavings){
    savings = newSavings;
}

void Account::printPerson(){
    std::cout << "Account Number: " << accNum << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Checkings: " << checking << std::endl;
    std::cout << "Savings: " << savings << std::endl;
    std::cout << "= = = = =" << std::endl;
}

