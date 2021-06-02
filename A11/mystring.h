#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
public:
    Mystring(const char*);
    void setString(const char*);
    const char* getString();
    void subString(char*, int, int);
    int length();
private:
    const char *str;
};

void tryParseTime(const char*);

#endif
