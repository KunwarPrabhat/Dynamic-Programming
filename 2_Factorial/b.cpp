#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> memo;

int factorial(int n) {
    if (n == 0) return 1;
    if (memo.find(n) != memo.end()) return memo[n];
    memo[n] = n * factorial(n - 1);
    return memo[n];
}

int main() {
    int n;
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
