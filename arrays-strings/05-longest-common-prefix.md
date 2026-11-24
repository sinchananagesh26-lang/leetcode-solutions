Problem: Longest Common Prefix (Easy)

Link: https://leetcode.com/problems/longest-common-prefix/

Approach

I used the character-by-character comparison approach. First, I take a character from the first string and compare it with the same position in all other strings. If all characters match, I add the character to the prefix. Otherwise, I stop.

Complexity

* Time: O(n × m)
* Space: O(m)

Here, n is the number of strings and m is the length of the shortest string.

Notes

* Tested with [“flower”, “flow”, “flight”].
* Tested with [“dog”, “racecar”, “car”].
* If there is no common prefix, the output is an empty string.