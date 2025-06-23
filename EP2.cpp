#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    unsigned long long a = 0, b = 1, next = 0;
    for (int i = 1; i <= N; ++i) {
        cout << a;
        if (i < N) cout << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << "\n";
    cout << "100th Fibonacci number is: " << a << "\n";

    return 0;
}
