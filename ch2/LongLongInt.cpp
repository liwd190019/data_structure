#include "LongLongInt.h"
using namespace std;
LongLongInt::LongLongInt(const char *n){
    const char *tmp;

    switch(n[0]){
        case '+':
            sign='+';
            tmp = n+1;
            break;
        case '-':
            sign='-';
            tmp = n+1;
            break;
        default:
            sign='+';
            tmp = n;
    }
    if(strcmp(tmp, "0") == 0){
        tmp="";
    }
    int len = strlen(tmp);

    num = new char[len+1];
    for (int i = 0; i < len; i++)
    {
        num[len-i-1] = tmp[i];
    }
    num[len] = '\0';

}