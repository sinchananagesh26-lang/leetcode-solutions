#include <stdio.h>
#include <assert.h>

int maxProfit(int prices[], int pricesSize) {
    if (pricesSize < 2) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < pricesSize; i++) {

        if (prices[i] - minPrice > maxProfitValue) {
            maxProfitValue = prices[i] - minPrice;
        }

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    return maxProfitValue;
}

int main() {

    // Test Case 1: Normal prices
    int prices1[] = {7, 1, 5, 3, 6, 4};
    assert(maxProfit(prices1, 6) == 5);
    printf("Test Case 1 Passed!\n");

    // Test Case 2: Prices always decrease
    int prices2[] = {7, 6, 4, 3, 1};
    assert(maxProfit(prices2, 5) == 0);
    printf("Test Case 2 Passed!\n");

    // Test Case 3: Single day
    int prices3[] = {5};
    assert(maxProfit(prices3, 1) == 0);
    printf("Test Case 3 Passed!\n");

    printf("All test cases passed!\n");

    return 0;
}