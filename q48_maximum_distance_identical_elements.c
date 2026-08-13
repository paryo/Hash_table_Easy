#include <limits.h>
#include <stdio.h>

int maximum_distance(int nums[] , int num_size) {

    int fist_idx[10];

    int max_distance = INT_MIN;

    for (int i=0 ; i<10 ; i++) {

       fist_idx[i] = -1;
    }

    for (int i=0 ; i<num_size;i++) {

        if (fist_idx[nums[i]] == -1) {

            fist_idx[nums[i]] = i;
        }

        else {


            int distance = i - fist_idx[nums[i]];

            if (distance > max_distance) {

                max_distance = distance;
            }

        }
    }

    if (max_distance == INT_MIN) {

        return -1;
    }

    return max_distance;



}

int main() {

    int nums[] = {1, 2, 3, 1, 2, 1};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("Maximum distance is : %d", maximum_distance(nums,num_size));

    return 0;
}