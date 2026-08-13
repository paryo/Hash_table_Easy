#include <stdio.h>

int frq_even_number(int nums[] , int num_size) {

    int count[10] = {0};

    int max_val = 0;

    int ans = -1;

    for (int i = 0 ; i<num_size;i++) {

        count[nums[i]]++;
    }

    for (int i = 0 ; i <num_size ; i++) {

        if (nums[i] %2 == 0) {


            if (count[nums[i]] > max_val) {

                max_val = count[nums[i]];

                ans = nums[i];



            }


        }
    }



return ans;


}

int main() {

    int nums[] = {1, 3, 5, 6};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    printf("even number which has highest frq is : %d [-1 means even is not found]  ", frq_even_number(nums,num_size));

    return 0;
}