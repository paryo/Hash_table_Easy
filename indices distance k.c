#include <stdio.h>

#include <stdbool.h>

bool indices_distance_k(int nums[] , int num_size , int k) {

    int first_idx[10];

    for (int i= 0 ; i<10;i++) {

        first_idx[i] = -1;
    }


    int last_idx = 0;

    for (int i =0 ; i< num_size ; i++) {

        if (first_idx[nums[i]] !=-1) {

            last_idx = i;

            if (last_idx - first_idx[nums[i]] <= k) {


                return true;
            }


        }

        else {


            first_idx[nums[i]] = i;
        }


    }

    return false;
}



int main() {

    int nums[] = {1,2,3,4};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    int k = 3;

    printf("%d",indices_distance_k(nums,num_size,k));

    return 0;
}