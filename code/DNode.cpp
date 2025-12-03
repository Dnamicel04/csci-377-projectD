// DNode.cpp
#include "DNode.h"

// Constructor implementation
template<typename A>
DNode<A>::DNode(const Account& per, DNode<A>* n , DNode<A>* p): person(per), next(n), prev(p) {
        activeNodes++;
    }

// Destructor implementation
template<typename A>
DNode<A>::~DNode() {
    activeNodes--;
}