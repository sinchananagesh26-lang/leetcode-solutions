#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    // Test Case 1: Valid anagram
    assert(isAnagram("anagram", "nagaram") == true);
    printf("Test Case 1 Passed!\n");

    // Test Case 2: Not an anagram
    assert(isAnagram("rat", "car") == false);
    printf("Test Case 2 Passed!\n");

    // Test Case 3: Empty strings
    assert(isAnagram("", "") == true);
    printf("Test Case 3 Passed!\n");

    printf("All test cases passed!\n");

    return 0;
}