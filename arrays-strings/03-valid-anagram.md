Problem: Valid Anagram (Easy)

Link: https://leetcode.com/problems/valid-anagram/

Approach

I used a frequency-counting technique with an array of 26 integers. I count the occurrences of each letter in the first string and subtract the occurrences in the second string. If all counts become zero, both strings are anagrams.

Complexity

* Time: O(n)
* Space: O(1), because the frequency array always has 26 elements.

Notes

Tested with valid anagrams, non-anagrams, and empty strings. Learned that character frequency can be checked efficiently without sorting the strings.