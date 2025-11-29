#include "Person.h"
#include <iostream>

template<typename A>
class DNode{

    private:
        // pointer to the next node
        DNode* next;
        // pointer to the previous node
        DNode* prev
        // Person value
        Person person;
        // Constructor
        DNode(const Person& p, DNode* n = nullptr, DNode* p = nullptr);

    public:
        // number to keep track of how many accounts there are in the bank account
        static int activeNodes;
        // Destructor
        ~DNode();
        

};