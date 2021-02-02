#ifndef CONVERT
#define CONVERT

#include <iostream>
#include <cstdlib>
#include <cmath>

class Convert {
    public:
        Convert(char *str);
        Convert(Convert const& src);
        ~Convert(void);
        Convert & operator=(Convert const& src);
        void printToDouble(void) const;
        void printToFloat(void) const;
        void printToInt(void) const;
        void printToChar(void) const;

    private:
        Convert(void);
        double _str;
        bool _validArg;
};

#endif