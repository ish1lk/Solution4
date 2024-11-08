#include "LIST2.H"

Node::Node(const String& s, Node* n) : str(s), next(n) {}

List::List(int argc, char* argv[]) : hd(nullptr) {
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            hd = new Node(String(argv[i]), hd);
        }
    }
}

String* List::operator()(int i) {
    static Node* curr = hd;
    if (i) {
        curr = hd;
    }
    Node* tmp = curr;
    if (curr != nullptr) {
        curr = curr->next;
    }
    return tmp == nullptr ? nullptr : &tmp->str;
}
