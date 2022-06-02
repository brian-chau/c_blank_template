#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i, *k;

    *returnSize = numsSize;
    k = (int*)malloc(sizeof(int) * numsSize);

    for (i = 0; i < numsSize; i++) {
        if (i == 0) {
            nums[i] = nums[i];
        } else {
            nums[i] = nums[i] + nums[i - 1];
        }
    }

    for (i = 0; i < numsSize; i++) {
        k[i] = nums[i];
    }

    return k;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int newSize = 0;
    int* result = runningSum(array, 5, &newSize);

    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
}