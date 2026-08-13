#include <limits.h>
#include <stdio.h>

int minimum_non_zero(int nums[] , int num_size) {

    int count[25] = {0};

    int min_val = INT_MAX;

    int final_ans = 0;

    //counting frequency

    for (int i = 0 ; i<num_size ;i++) {

        count[nums[i]]++;
    }


    // calculating minimum value

    for (int i =0 ; i<num_size ; i++) {

        if (count[nums[i]] < min_val) {

            min_val = count[nums[i]];

            final_ans = nums[i];

        }

    }

    for (int i = 0 ; i<num_size ; i++) {

        if (count[nums[i]] >0) {

            if (count[nums[i]] == min_val && nums[i] < final_ans) {


                final_ans =nums[i];

            }
        }

    }

    return final_ans;


}

int main() {

    int nums[] = {10,10,5,5,20,20,20};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d",minimum_non_zero(nums,num_size));

    return 0;
}