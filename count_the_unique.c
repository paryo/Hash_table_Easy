#include <stdio.h>

int count_unique(int nums[] , int num_size) {

    int count[10] = {0};

    int frq_count = 0;

    for (int i = 0 ; i<num_size ; i++) {

        if (count[nums[i]] == 0) {

            count[nums[i]]++;

            frq_count++;

        }
    }


    return frq_count;



}

int main() {

    int nums[] = {1, 2, 3, 2, 1, 4, 5};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d", count_unique(nums , num_size));

    return 0;
}