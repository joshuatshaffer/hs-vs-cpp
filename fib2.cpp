
#include <iostream>

int fib (int n) {
    int a = 1;
    int b = 0;
    while (n > 0) {
        auto temp = a;
        a = b;
        b = temp + b;
        --n;
    }
    return b;
}

int main (int argc, char const *argv[]) {
    for (int i = 0; i < 20; ++i) {
        std::cout << fib (i) << std::endl;
    }
    return 0;
}
