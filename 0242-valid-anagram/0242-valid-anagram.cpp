class Solution {
public:
    bool isAnagram(string s, string t) {
        // Check if the lengths of the strings are different
        if (s.length() != t.length()) {
            return false;
        }

        // Use a hash map to store character frequencies in string s
        unordered_map<char, int> charFreq;

        // Count character frequencies in string s
        for (char c : s) {
            charFreq[c]++;
        }

        // Decrement character frequencies in string t
        for (char c : t) {
            if (charFreq.find(c) == charFreq.end() || charFreq[c] == 0) {
                return false; // If the character is not found or its frequency is 0, not an anagram
            } else {
                charFreq[c]--;
            }
        }
        return true;  // Added this line to complete the function
    }
};
