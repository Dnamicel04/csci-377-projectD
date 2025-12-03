
#include <iostream>
template<typename B> //to pass template name from Dnode


class BankDLL{
private:

DNode<A>* head;
DNode<A>* tail;

 //foundation for remove and add functions
void addNewAccount(DNode<B> *p, const T& e);
void removeAccount(DNode<B> *p);

public:
BankDLL();
~BankDLL();

bool empty() const;

// will print out the head and tail nodes repsectively
const T& front() const;
const T& back() const;

// will add Accounts to. list

void addFront(const B& e);  
void addBack(const B& e);
    

//will remove head and tail nodes
void removeFront();
void removeBack();
      

// withdraw and deposit between checking accounts (default)
// func: payment(int accNumOrigin, double amountSending, int accNumDestination))

//prints out current nodes in list from smallest to largest
void displayAccounts()const;
void displayUserCheckings() const; 
void displayUserSavings() const; 
};


