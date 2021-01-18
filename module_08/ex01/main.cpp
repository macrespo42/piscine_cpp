#include "Span.hpp"

int main(void) {
    Span span = Span(3);

    try {
        span.addNumber(42);
        span.addNumber(11);
    }
    catch (std::exception const& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << span.longestSpan() << std::endl;
    }

    catch (std::exception const& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}