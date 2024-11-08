#ifndef LIST1_H
#define LIST1_H

#include "Str1.h"

class Node {
private:
    Node* next;
    String str;  // Включение объекта
    Node(const String& s, Node* n);
    friend class List;
};

class List {
private:
    Node* hd;
public:
    List(int argc, char* argv[]);
    String* operator()(int restart);
};

#endif // LIST1_H
