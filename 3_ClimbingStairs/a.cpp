#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }

        vector<int> arr(n + 1);
        arr[1] = 1;
        arr[2] = 2;

        for (int i = 3; i <= n; i++) {
            arr[i] = arr[i - 1] + arr[i - 2];
        }

        return arr[n];
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter the number of steps: ";
    cin >> n;

    int result = solution.climbStairs(n);
    cout << "Number of distinct ways to climb " << n << " steps is: " << result << endl;

    return 0;
}

