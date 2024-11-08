#if defined (Str)
#else
    #define Str
    #include <iostream>
    #include <string.h>
    using namespace std;

class String {
private:
    char* s;
    int len;
public:
    String();
    String(const String& str);
    String(const char* p);
    ~String();
    void assign(const String& str);
    void print() const;
    void concat(const String& a, const String& b);
    String& operator=(const String& str);
};
#endif

