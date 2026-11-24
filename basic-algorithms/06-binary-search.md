## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
I used the Binary Search technique to find the target element in a sorted array. I maintained two pointers, low and high, and repeatedly calculated the middle index. If the middle element matched the target, I returned its index. Otherwise, I adjusted the search range.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Binary Search works only on sorted arrays. I learned how to reduce the search space by half in every iteration. If the target is not found, the function returns -1.