#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    int dp[n + 1];
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] * i;
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
