#include <iostream>
#include "LIST1.H"

int main(int argc, char* argv[]) {
    List lst(argc, argv);
    String* s;

    std::cout << "Первый проход:" << std::endl;
    while ((s = lst(0)) != nullptr) {
        s->print();
    }

    std::cout << std::endl << "Первый элемент:" << std::endl;
    s = lst(1);
    if (s) {
        s->print();
    } else {
        std::cout << "Нет элемента с индексом 1" << std::endl;
    }

    std::cout << std::endl << "Второй проход:" << std::endl;
    while ((s = lst(0)) != nullptr) {
        s->print();
    }

    return 0;
}
