#include <stdio.h>
#include <stdlib.h>  

int findClosestToZero(int nums[], int n) {
    int closest = nums[0];
    
    for (int i = 1; i < n; i++) {
        int current = nums[i];

        if (abs(current) < abs(closest)) {
            closest = current;
        }
        else if (abs(current) == abs(closest) && current < closest) {
            closest = current;
        }
    }

    return closest;
}

int main() {
    int nums[] = {-4, -2, 1, 4, 8, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findClosestToZero(nums, n);
    printf("Number closest to zero: %d\n", result);

    return 0;
}
