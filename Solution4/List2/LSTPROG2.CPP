#include "Str1.h"
#include "LIST2.H"
#include "Lstiter.h"
#include <iostream>

using namespace std;

ListIterator::ListIterator(List& lst) : current(lst.hd) {}

String* ListIterator::operator()() {
    if (current == nullptr) return nullptr;
    Node* tmp = current;
    current = current->next;
    return &tmp->str;
}

int main(int argc, char* argv[]) {
    List lst(argc, argv);
    ListIterator iter1(lst);
    String* p1;
    String* p2;

    while ((p1 = iter1())) {
        p1->print();

        // Создаем новый итератор по списку
        ListIterator iter2(lst);

        while ((p2 = iter2())) {
            cout << "\t\t\t";
            p2->print();
        }
    }

    return 0;
}
