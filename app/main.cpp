#include <iostream>
#include <cstdlib>

#include "adder.h"

int main(int argc, char** argv) {
    if(argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <number>\n";
        return EXIT_FAILURE;
    }

    int x = std::atoi(argv[1]);

    std::cout << "The number " << x << " plus one is " << addone(x) << "\n";

    return EXIT_SUCCESS;
}
