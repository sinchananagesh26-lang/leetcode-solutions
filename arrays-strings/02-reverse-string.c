#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Normal string
    char str1[] = "hello";
    reverseString(str1, strlen(str1));

    assert(strcmp(str1, "olleh") == 0);
    printf("Test Case 1 Passed!\n");

    // Test Case 2: Single character
    char str2[] = "a";
    reverseString(str2, strlen(str2));

    assert(strcmp(str2, "a") == 0);
    printf("Test Case 2 Passed!\n");

    printf("All test cases passed!\n");

    return 0;
}