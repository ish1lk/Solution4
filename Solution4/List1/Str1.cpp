#include "Str1.h"

String::String(const String& str) {
    len = str.len;
    s = new char[len + 1];
    strcpy(s, str.s);
}

String::String(const char* p) {
    len = static_cast<int>(strlen(p));
    s = new char[len + 1];
    strcpy(s, p);
}

void String::assign(const String& str) {
    if (this == &str)
        return;
    delete[] s;
    len = str.len;
    s = new char[len + 1];
    strcpy(s, str.s);
}

String& String::operator=(const String& str) {
    if (this == &str)
        return *this;
    delete[] s;
    len = str.len;
    s = new char[len + 1];
    strcpy(s, str.s);
    return *this;
}

void String::concat(const String& a, const String& b) {
    delete[] s;
    len = a.len + b.len;
    s = new char[len + 1];
    strcpy(s, a.s);
    strcat(s, b.s);
}

void String::print() const {
    std::cout << s << std::endl;
}

