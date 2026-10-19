//
// Created by Donut on 15.10.2026.
//

#include "TwoWayList.h"

#include <iostream>
#include <ostream>

//TWO WAY LIST
TwoWayList::TwoWayList() = default;

void TwoWayList::pushbackNode(std::string ID) {
    Node *newNode = new Node(ID);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->setNext(newNode);
        newNode->setPrev(tail);
        tail = newNode;
    }
}

bool TwoWayList::insertNode(std::string newID, std::string prevID) {
    Node *prevNode = findNode(prevID);
    if (prevNode == nullptr) {return false;}

    Node *newNode = new Node(newID);
    Node *nextNode = nullptr;

    if (prevNode == tail) {
        prevNode->setNext(newNode);
        newNode->setPrev(prevNode);
        tail = newNode;
    }
    else {
        nextNode = prevNode->getNext();
        prevNode->setNext(newNode);
        newNode->setPrev(prevNode);
        newNode->setNext(nextNode);
        nextNode->setPrev(newNode);
    }

    return true;
}

std::string TwoWayList::removeNode(std::string ID) {
    std::string returnValue;
    Node *theNode = findNode(ID);
    if (theNode == nullptr) {return "";}

    Node *prevNode = theNode->getPrev();
    Node *nextNode = theNode->getNext();

    if (theNode == head && theNode == tail) {
        head = nullptr;
        tail = nullptr;

        returnValue = theNode->getID();
        delete theNode;
    }
    else if (theNode == head) {
        nextNode->setPrev(nullptr);
        head = nextNode;

        returnValue = theNode->getID();
        delete theNode;
    }
    else if (theNode == tail) {
        prevNode->setNext(nullptr);
        tail = prevNode;

        returnValue = theNode->getID();
        delete theNode;
    }
    else {
        prevNode->setNext(nextNode);
        nextNode->setPrev(prevNode);

        returnValue = theNode->getID();
        delete theNode;
    }
    return returnValue;
}

void TwoWayList::sort() {
    Node *node1 = nullptr;
    Node *node2 = nullptr;
    Node *prevNode = nullptr;
    Node *nextNode = nullptr;

    int nodeCount = countNodes();
    for (int i = 0; i < nodeCount; i++) {
        node1 = head;
        for (int j = 0; j < nodeCount - i - 1; j++) {
            node2 = node1->getNext();

            if (node1->getID() > node2->getID()) {
                prevNode = node1->getPrev();
                nextNode = node2->getNext();

                //przepinanie wskaźników węzłów otaczających
                if (prevNode == nullptr) {head = node2;}
                else {prevNode->setNext(node2);}

                if (nextNode == nullptr) {tail = node1;}
                else {nextNode->setPrev(node1);}

                //przepinanie wskaźników węzłów przestawianych
                node1->setPrev(node2);
                node1->setNext(nextNode);
                node2->setPrev(prevNode);
                node2->setNext(node1);
            }
            else {node1 = node2;}
        }
    }

}

void TwoWayList::display() {
    Node *currNode = head;
    while (currNode != nullptr) {
        std::cout << currNode->getID() << std::endl;
        currNode = currNode->getNext();
    }
}

TwoWayList::~TwoWayList() {
    Node* currNode = head;
    Node* nextNode = nullptr;
    while (currNode != nullptr) {
        nextNode = currNode->getNext();
        delete currNode;
        currNode = nextNode;
    }
}

int TwoWayList::countNodes() {
    int i = 0;
    Node *currNode = head;
    while (currNode != nullptr) {
        i++; currNode = currNode->getNext();
    }
    return i;
}

Node *TwoWayList::findNode(std::string ID) {
    Node *currNode = head;
    while (currNode != nullptr) {
        if (currNode->getID() == ID) {return currNode;}
        currNode = currNode->getNext();
    }
    return nullptr;
}

//NODE
Node::Node(std::string ID) {
    this->ID = std::move(ID);
}

Node * Node::getPrev() {
    return prevNode;
}

Node * Node::getNext() {
    return nextNode;
}

void Node::setPrev(Node *prevNode) {
    this->prevNode = prevNode;
}

void Node::setNext(Node *nextNode) {
    this->nextNode = nextNode;
}

std::string Node::getID() {
    return this->ID;
}

