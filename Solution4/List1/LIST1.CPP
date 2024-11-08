#include "LIST1.H"
#include <iostream>

// Конструктор для класса Node
Node::Node(const String& s, Node* n) : str(s), next(n) {}

// Конструктор для класса List
List::List(int argc, char* argv[]) : hd(nullptr) {
    std::cout << "Инициализация списка с " << argc << " аргументами." << std::endl;
    if (argc > 1) {
        for (int i = argc - 1; i > 0; --i) {
            std::cout << "Добавление узла с аргументом: " << argv[i] << std::endl;
            hd = new Node(String(argv[i]), hd);
        }
    } else {
        std::cout << "Аргументы не переданы." << std::endl;
    }
}

// Оператор для получения строки по индексу
String* List::operator()(int i) {
    static Node* curr = hd;
    if (i) {
        curr = hd;
    }
    Node* tmp = curr;
    if (curr != nullptr) {
        curr = curr->next;
    }
    if (tmp == nullptr) {
        std::cout << "Узлов больше нет." << std::endl;
    }
    return (tmp == nullptr) ? nullptr : &tmp->str;
}
