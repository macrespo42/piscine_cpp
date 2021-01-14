#include "Data.hpp"

std::string randomString(void) {
    std::string randomStr;
    for (int i(0); i < 8; i++) {
        randomStr += (rand() % 127) + 1;
    }
    return randomStr;
}

void * serialize(void) {
    srand(time(NULL));
    Data *data = new Data;
    data->n = (rand() % 42) + 1;
    data->s1 = randomString();
    data->s2 = randomString();

    std::cout << "Raw data:" << std::endl;
    std::cout << data->n << std::endl;
    std::cout << data->s1 << std::endl;
    std::cout << data->s2 << std::endl;
    std::cout << "--------------------" << std::endl;
    return reinterpret_cast<void*>(data);
}

Data * deserialize(void * raw) {
    return reinterpret_cast<Data*>(raw);
}

int main(void) {
    void *raw;
    Data *data;
    raw = serialize();
    data = deserialize(raw);

    std::cout << "Data deserialized:" << std::endl;
    std::cout << data->n << std::endl;
    std::cout << data->s1 << std::endl;
    std::cout << data->s2 << std::endl;
    return 0;
}