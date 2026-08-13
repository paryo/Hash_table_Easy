#include <stdbool.h>
#include<stdio.h>

int find_the_first_repeating(int nums[], int num_size) {

    int count[11] = {0};

    for (int i = 0 ; i<num_size ; i++) {

        if (count[nums[i]] !=0) {

            return nums[i];
        }

        else {

            count[nums[i]] = 1;
        }
    }

    return false;


}

int main() {

    int nums[] = {10, 5, 3, 4, 3, 5, 6};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d",find_the_first_repeating(nums,num_size));

return 0;

}