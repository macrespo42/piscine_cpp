#ifndef DATA
#define DATA

#include <iostream>
#include <string>
#include <ctime>


struct Data {
    std::string s1;
    int n;
    std::string s2;
};

void * serialize(void);
Data * deserialize(void * raw);

#endif