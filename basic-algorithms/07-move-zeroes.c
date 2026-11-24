#include <stdio.h>

void moveZeroes(int nums[], int numsSize) {
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zeroes
    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {

    // Test Case 1: Typical case
    int arr1[] = {0, 1, 0, 3, 12};
    moveZeroes(arr1, 5);

    printf("Test Case 1: ");
    printArray(arr1, 5);

    // Test Case 2: Edge case
    int arr2[] = {0, 0, 0};
    moveZeroes(arr2, 3);

    printf("Test Case 2: ");
    printArray(arr2, 3);

    return 0;
}