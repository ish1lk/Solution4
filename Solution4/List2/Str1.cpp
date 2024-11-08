#include "Str1.h"

String::String() : s(new char[1]), len(0) {
    s[0] = 0;
}

String::String(const String& str) : len(str.len) {
    s = new char[len + 1];
    strcpy(s, str.s);
}

String::String(const char* p) : len(static_cast<int>(strlen(p))) {
    s = new char[len + 1];
    strcpy(s, p);
}

String::~String() {
    delete[] s;
}

void String::assign(const String& str) {
    if (this == &str) return;
    delete[] s;
    len = str.len;
    s = new char[len + 1];
    strcpy(s, str.s);
}

String& String::operator=(const String& str) {
    if (this == &str) return *this;
    delete[] s;
    len = str.len;
    s = new char[len + 1];
    strcpy(s, str.s);
    return *this;
}

void String::concat(const String& a, const String& b) {
    len = a.len + b.len;
    delete[] s;
    s = new char[len + 1];
    strcpy(s, a.s);
    strcat(s, b.s);
}

void String::print() const {
    cout << s << endl;
}
