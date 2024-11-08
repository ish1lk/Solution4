#ifndef STR1_H
#define STR1_H

#include <iostream>
#include <cstring>

class String {
private:
    char* s;
    int len;
public:
    String() : s(new char[1]), len(0) { s[0] = 0; }
    String(const String& str);
    String(const char* p); // Добавлен конструктор
    ~String() { delete[] s; }
    void assign(const String& str);
    void print() const;
    void concat(const String& a, const String& b);
    String& operator=(const String& str);
};

#endif // STR1_H
