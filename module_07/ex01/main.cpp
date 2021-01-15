#include "iter.hpp"

int main(void) {

    int arrayInt[3] = {4, 2, 3};
    float arrayFloat[3] = {4.2, 2.4, 3.3};
    std::string array[3] = {"coucou", "cucu", "caca"};

    iter<int>(arrayInt, 3, print);
    iter<float>(arrayFloat, 3, print);
    iter<std::string>(array, 3, print);
    return 0;
}