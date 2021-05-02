#include <iostream>
#include "src/linked_list.hpp"

void showList(DoublyLinkedList myList)
{
    std::cout << "==================================" << std::endl;
    myList.showList();
    std::cout << "==================================" << std::endl;
}

int main()
{
    DoublyLinkedList myList;

    myList.addEnd(4);
    myList.addEnd(12);
    myList.addEnd(21);
    myList.addEnd(111);

    showList(myList);

    std::cout << "Size:" << myList.size() << std::endl;
    myList.showHead();
    myList.showTail();

    myList.removeTail();
    myList.removeTail();
    myList.removeTail();
    myList.removeTail();
    myList.removeTail();
    showList(myList);
    std::cout << "Size:" << myList.size() << std::endl;

    return 0;
}
