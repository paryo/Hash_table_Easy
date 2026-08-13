#include <stdio.h>

#include <stdbool.h>

bool contains_duplicate(int nums[] , int num_size) {

    int count[10] = {0};


    for (int i = 0 ; i<num_size ; i++) {

        if (count[nums[i]] != 0) {


            return true;


        }

        else {

            count[nums[i]] = 1;


        }
    }

    return false;



}

int main () {

    int nums[] = {1,2,3,1};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d", contains_duplicate(nums,num_size));

    return 0;
}