
#include <iostream>

int fib (int n) {
    static int (*fib1) (int, int, int);
    fib1 = [](int a, int b, int n) {
        if (n == 0)
            return b;
        return fib1 (b, a + b, n - 1);
    };
    return fib1 (1, 0, n);
}

int main (int argc, char const *argv[]) {
    for (int i = 0; i < 20; ++i) {
        std::cout << fib (i) << std::endl;
    }
    return 0;
}
