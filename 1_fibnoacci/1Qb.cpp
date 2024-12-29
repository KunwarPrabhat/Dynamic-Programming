#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> memo;

int fib(int n) {
    if (n <= 1) return n;
    if (memo.find(n) != memo.end()) return memo[n];
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main() {
    int n;
    cin >> n;
    cout << "Fibonacci number: " << fib(n) << endl;
    return 0;
}

// Memoization (Top-down DP)
// time/space O(n)