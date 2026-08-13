#include <stdio.h>

int even_frequency(int nums[] , int num_size) {

    int count[30] = {0};

    int even_count =0;

    for (int i = 0 ; i<num_size;i++) {

        count[nums[i]]++;
    }

    for (int i = 0 ; i<num_size;i++) {

        if (count[nums[i]] > 0 ) {


            if (count[nums[i]] %2 == 0) {

                even_count++;

                count[nums[i]] = 0;

            }
        }
    }

    return even_count;

}

int main() {

    int nums[] = {10, 20, 10, 30, 20, 20, 20};

    int num_size = sizeof(nums)/ sizeof(nums[0]);

    printf("%d" , even_frequency(nums,num_size));

    return 0;

}