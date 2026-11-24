## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
I used the Stack data structure to check whether the brackets are correctly matched. Whenever an opening bracket is encountered, I push it onto the stack. When a closing bracket appears, I check whether it matches the most recent opening bracket. If all brackets match and the stack is empty at the end, the string is valid.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
I learned how the Stack follows the Last In, First Out (LIFO) principle. I tested both valid and invalid bracket combinations. An empty stack at the end indicates that all brackets are properly matched.