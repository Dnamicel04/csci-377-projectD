#include "Account.h"
#include <iostream>

template<typename A>
class DNode{

    private:
        // pointer to the next node
        DNode* next;
        // pointer to the previous node
        DNode* prev;
        // Person value
        Account person;// node
        // Constructor
        DNode(const Account& per, DNode* n = nullptr, DNode* p = nullptr);

    public:
        // number to keep track of how many accounts there are in the bank account
        static int activeNodes;
        // Destructor
        ~DNode();
     
    friend class BankDLL<B>;

};