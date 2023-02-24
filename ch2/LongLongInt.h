#ifndef LONGLONGINT
#define LONGLONGINT
#include<iostream>
#include<string.h>

class LongLongInt
{
    friend LongLongInt operator+(const LongLongInt &, const LongLongInt &);
    friend ostream &operator<<(ostream &, const LongLongInt &);
    friend LongLongInt operator-(const LongLongInt &, const LongLongInt &);
private:
    char sign;
    char *num;
public:
    LongLongInt(const char *n="");
    LongLongInt(const LongLongInt &);
    LongLongInt &operator=(const LongLongInt &);
    ~LongLongInt(){delete num;}
    
};

#endif // !LONGLONGINT