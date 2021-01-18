#include "Span.hpp"

int main(void) {
    Span span = Span(4);
    Span bigSpan = Span(10000000);

    try {
        bigSpan.fill();
        span.addNumber(21);
        span.addNumber(15);
        span.addNumber(11);
        span.addNumber(21);
    }
    catch (std::exception const& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }

    try {
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest Bigspan: " << bigSpan.longestSpan() << std::endl;
        std::cout << "Shortest Bigspan: " << bigSpan.shortestSpan() << std::endl;
    }

    catch (std::exception const& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
    return 0;
}