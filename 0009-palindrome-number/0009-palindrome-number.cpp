class Solution {
public:
    bool isPalindrome(int x) {
  if (x < 0) {
            return false;
        }

        int temp = x;
        long long ans = 0;

        while (temp) {
            int rem = temp % 10;
            ans = rem + ans * 10;
            temp /= 10; // Advance to the next digit
        }

        return ans == x;
    }
};