#include <stdio.h>

int odd_frequency(int nums[] , int num_size) {

    int count[31] = {0};

    int odd_count = 0;

    for (int i = 0 ; i<num_size ;i++) {

        count[nums[i]]++;
    }

    for (int i = 0 ;i <num_size ; i++) {

        if (count[nums[i]] %2 !=0) {

            odd_count++;

            count[nums[i]] = 0;

        }


    }

    return odd_count;

}

int main() {

    int nums[] = {10,20,20,10,10,30};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d" , odd_frequency(nums,num_size));

    return 0;
}