// DNode.cpp
#include "DNode.h"

// Constructor implementation
DNode::DNode(const Person& per, DNode* n , DNode* p)
    : person(per), next(n), prev(p) {
        activeNodes++;
    }

// Destructor implementation
DNode::~DNode() {
    activeNodes--;
}