Problem: Reverse String (Easy)

Link: https://leetcode.com/problems/reverse-string/

Approach

I used the Two Pointer Technique. One pointer starts at the beginning of the character array, and the other starts at the end. I swap the characters and move both pointers towards the center until the string is reversed.

Complexity

* Time: O(n)
* Space: O(1)

Notes

Tested with a normal string and a single-character string. Learned that swapping characters in-place reverses the string without using extra array space.