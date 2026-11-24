#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Two Sum function
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {

            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

// Local testing
int main() {

    // Test Case 1: Normal case
    int nums1[] = {2, 7, 11, 15};
    int size1 = 0;

    int* result1 = twoSum(nums1, 4, 9, &size1);

    assert(size1 == 2);
    assert(result1[0] == 0 && result1[1] == 1);

    printf("Test Case 1 Passed!\n");
    free(result1);

    // Test Case 2: Duplicate numbers
    int nums2[] = {3, 3};
    int size2 = 0;

    int* result2 = twoSum(nums2, 2, 6, &size2);

    assert(size2 == 2);
    assert(result2[0] == 0 && result2[1] == 1);

    printf("Test Case 2 Passed!\n");
    free(result2);

    printf("All test cases passed!\n");

    return 0;
}