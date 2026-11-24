Problem: Best Time to Buy and Sell Stock (Easy)

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

Approach

I used a single-pass approach. I maintain the minimum stock price seen so far and calculate the possible profit at each day. I update the maximum profit whenever a better profit is found.

Complexity

* Time: O(n)
* Space: O(1)

Notes

Tested with increasing and decreasing prices, as well as a single-day input. Learned that tracking the minimum price helps calculate maximum profit efficiently.