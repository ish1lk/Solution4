#if defined (Lst)
#else
    #define Lst
    #include "Str1.h"

    class Node {
    private:
        Node* next;
        String str;
        Node(const String& s, Node* n);
        friend class List;
        friend class ListIterator;
    };

class List {
private:
    Node* hd;
public:
    List(int argc, char* argv[]);
    String* operator()(int restart);
    friend class ListIterator;
};
#endif
