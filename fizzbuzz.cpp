
#include <iostream>

using namespace std;

string fizzbuzz (int n) {
    bool d3 = n % 3 == 0;
    bool d5 = n % 5 == 0;
    if (d3 && d5) {
        return "FizzBuzz";
    } else if (d3) {
        return "Fizz";
    } else if (d5) {
        return "Buzz";
    } else {
        return to_string (n);
    }
}

int main () {
    for (int i = 1; i <= 100; ++i) {
        cout << fizzbuzz (i);
        if (i != 100) {
            cout << ", ";
        } else {
            cout << "." << endl;
        }
    }
}
