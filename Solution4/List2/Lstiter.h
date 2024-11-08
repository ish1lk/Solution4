#include "LIST2.H"

class ListIterator {
private:
    Node* current;
public:
    ListIterator(List& lst);
    String* operator()();
};
