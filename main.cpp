#include "lib.h"

#include <iostream>

int main (int, char **) {
    std::cout << "Hello, world! Version: " << version_string() << std::endl;
    return 0;
}