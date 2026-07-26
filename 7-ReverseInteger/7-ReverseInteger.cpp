// Last updated: 7/26/2026, 4:02:54 PM
class Solution {
public:
    int reverse(int x) {
        long rev = 0;

        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;

            // If rev goes out of int range, return 0
            if (rev > INT_MAX || rev < INT_MIN)
                return 0;
        }

        return (int)rev;
    }
};
