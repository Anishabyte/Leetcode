class Solution {
public:
    bool isPalindrome(int x) {
        // If the number is negative, it cannot be a palindrome
        if (x < 0) {
            return false;
        }

        int original = x;  // Save the original number
        int reversed = 0;

        // Reverse the number with overflow check
        while (x != 0) {
            int digit = x % 10;

            // Check for potential overflow before performing the multiplication and addition
            if (reversed > (INT_MAX / 10) || (reversed == (INT_MAX / 10) && digit > 7)) {
                return false;
            }

            reversed = reversed * 10 + digit;
            x = x / 10;
        }

        // Check if the original number and the reversed number are the same
        return (original == reversed);
    }
};


