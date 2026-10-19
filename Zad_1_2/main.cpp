#include <iostream>

#include "TwoWayList.h"

int main() {

    TwoWayList *list = new TwoWayList();
    list->pushbackNode("kasztan");
    list->pushbackNode("grzybek");
    list->pushbackNode("robal");
    list->insertNode("bomba", "kasztan");
    list->removeNode("bomba");
    list->pushbackNode("amarena");
    list->pushbackNode("jabol");
    list->display();
    std::cout<<"\n\n";
    list->sort();
    list->display();

    return 0;
}
