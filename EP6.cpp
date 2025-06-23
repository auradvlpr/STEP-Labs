#include <iostream>
using namespace std;

int main() {
    int N = 100;
    
    long long sum = (long long)N * (N + 1) / 2;
    long long sumSq = (long long)N * (N + 1) * (2LL * N + 1) / 6;
    
    long long squareOfSum = sum * sum;
    long long difference  = squareOfSum - sumSq;
    
    cout << difference << "\n";
    return 0;
}
