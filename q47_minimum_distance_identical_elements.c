#include <limits.h>
#include <stdio.h>

int min_distance_identical(int nums[], int nums_size) {
    int last_idx[10];

    int min_distance = INT_MAX;

    for (int i = 0; i < 10; i++) {
        last_idx[i] = -1;
    }

    for (int i = 0; i < nums_size; i++) {
        if (last_idx[nums[i]] == -1) {

            last_idx[nums[i]] = i;

        }

        else {

            int distance = i - last_idx[nums[i]];

            if (distance < min_distance) {

                min_distance = distance;
            }

            last_idx[nums[i]] = i;
        }
    }

    if (min_distance == INT_MAX) {

        return -1;
    }


    return min_distance;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6};

    int nums_size = sizeof(nums) / sizeof(nums[0]);

    printf("Minimum distance is : %d", min_distance_identical(nums, nums_size));

    return 0;
}
