#ifndef CONVERT
#define CONVERT

#include <iostream>
#include <string>

class Convert {
    public:
        Convert(std::string str);
        Convert(Convert const& src);
        ~Convert(void);
        Convert & operator=(Convert const& src);

        
    private:
        Convert(void);
        double _str;
};

#endif