#include <complex.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

int most_frq_element_count(int nums[] , int num_size) {

    int count[30] = {0};

    int max_val = INT_MIN;

    // counting frequency

    for (int i =0 ; i<num_size ;i++) {

        count[nums[i]]++;
    }

    // calculating max value

    for (int i =0 ; i<num_size ; i++) {

        if (count[nums[i]] > max_val) {

            max_val = count[nums[i]];
        }
    }

    //comparing with the max value

    for (int i =0; i<num_size ;i++) {

        if (count[nums[i]] == max_val) {

            return count[nums[i]];
        }


    }


    return -1;


}

int main() {

    int nums[] = {10, 20, 10, 30, 10, 20};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d" , most_frq_element_count(nums,num_size));

    return 0;
}