#include <stdio.h>

int count_even_frq(int nums[] , int num_size) {

    int count[10] = {0};

    int even_count = 0;

    for (int i = 0 ; i<num_size;i++) {

        count[nums[i]]++;
    }

    for (int i = 0 ; i<num_size ;i++) {


        if (count[nums[i]] %2 == 0) {

                even_count++;

                count[nums[i]] = -1;


            }




    }

    return even_count;



}

int main() {

    int nums[] = {1, 1, 1, 2, 2, 3, 3, 3, 3};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("%d",count_even_frq(nums,num_size));

    return 0;
}