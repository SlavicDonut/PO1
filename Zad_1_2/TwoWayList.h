//
// Created by Donut on 15.10.2026.
//

#ifndef ZAD_1_2_TWOWAYLIST_H
#define ZAD_1_2_TWOWAYLIST_H
#include <string>


class Node;

class TwoWayList {
public:
    TwoWayList();
    void pushbackNode(std::string ID);
    bool insertNode(std::string newID, std::string prevID);
    std::string removeNode(std::string ID);
    void sort();
    void display();

    ~TwoWayList();

private:
    int countNodes();
    Node *findNode(std::string ID);
    Node *head = nullptr;
    Node *tail = nullptr;
};

class Node {
public:
    Node(std::string ID);

    Node *getPrev();
    Node *getNext();

    void setPrev(Node *prevNode);
    void setNext(Node *nextNode);
    std::string getID();

private:
    std::string ID;
    Node *prevNode = nullptr;
    Node *nextNode = nullptr;
};

#endif //ZAD_1_2_TWOWAYLIST_H
