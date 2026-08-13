#include <stdio.h>

int first_non_repeating(int nums[] , int num_size) {

    int count[10] = {0};

    for (int i =0 ; i<num_size ; i++) {

        count[nums[i]]++;

    }

    for (int i = 0 ; i< num_size ; i++) {

        if (count[nums[i]] == 1) {

            printf("Yes first non-repeating is available as below \n");

            return nums[i];
        }


    }

    printf("first non repeating is not available \n");

    return -1;


}

int main() {

    int nums[] = {9, 4, 9, 6, 7, 4};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d", first_non_repeating(nums,num_size));

    return 0;
}