#include <iostream>
using namespace std;

int main() {
    const int LIMIT = 4000000;
    int a = 1, b = 2;
    int sum = 0;

    while (b <= LIMIT) {
        if (b % 2 == 0) {
            sum += b;
        }
        int next = a + b;
        a = b;
        b = next;
    }

    cout << sum << "\n";
    return 0;
}
