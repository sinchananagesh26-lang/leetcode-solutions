Problem: Two Sum (Easy)

Link: https://leetcode.com/problems/two-sum/

Approach

I used the Brute Force Approach with two nested loops. The first loop selects an element, and the second loop checks whether another element can complete the target sum. When a matching pair is found, their indices are returned.

Complexity

* Time: O(n²)
* Space: O(1) auxiliary space (excluding the returned array).

Notes

Tested with a normal array and duplicate numbers. Learned that two different indices must be used even when both numbers have the same value.