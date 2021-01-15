#include "iter.hpp"

int main(void) {

    int arrayInt[3] = {4, 2, 3};
    float arrayFloat[3] = {4.2, 2.4, 3.3};

    iter<int>(arrayInt, 3, print);
    iter<float>(arrayFloat, 3, print);
    return 0;
}