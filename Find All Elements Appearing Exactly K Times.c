#include <stdio.h>

#include <stdlib.h>

int* appearing_k_times(int nums[] , int num_size , int* return_size , int p) {

    int count[101] = {0};

    for (int i =0 ;i < num_size; i++) {

        count[nums[i]]++;
    }

    // allocating dynamic memory

    int* ans = (int*)malloc(num_size*sizeof(int));

    int k = 0;

    for (int i =0 ; i <num_size ; i++) {

        if (count[nums[i]] == p) {

            ans[k] = nums[i];

            k++;

            count[nums[i]] = 0;

        }



    }

    *return_size = k;

    return ans;

}

int main() {
    int nums[] = { 10, 5, 10, 20, 5, 100};

    int p = 1;

    int nums_size = sizeof(nums)/sizeof(nums[0]);

    int ans_size;

    int* result = appearing_k_times(nums,nums_size,&ans_size,p);

    for (int i = 0 ;i < ans_size;i++) {

        printf(" %d " , result[i]);
    }

    free(result);

    return 0;


}