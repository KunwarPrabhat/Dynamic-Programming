import math

class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1:
            return 1
        
        ways = 1
        x = n - 1 
        
        for i in range(1, (n // 2) + 1):
            ways += math.factorial(x) // (math.factorial(i) * math.factorial(x - i))
            x -= 1

        return ways

# Main Program
if __name__ == "__main__":
    n = int(input("Enter the number of stairs: "))
    solution = Solution()
    print("Number of ways to climb:", solution.climbStairs(n))
