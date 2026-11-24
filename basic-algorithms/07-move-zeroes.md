## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
I used the Two Pointer technique to move all non-zero elements to the beginning of the array. I maintained the original order of non-zero elements and filled the remaining positions with zeroes.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
I learned how to modify an array in-place without using extra space. The relative order of non-zero elements must remain unchanged. I also tested the program with an array containing only zeroes.