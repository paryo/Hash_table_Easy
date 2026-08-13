#include <stdio.h>

#include <stdlib.h>

int* min_frq_in_odd(int nums[] , int num_size , int *return_size) {

    int count[10] = {0};

    int min_val = INT_MAX;


    for (int i =0 ; i <num_size ; i++) {

        count[nums[i]]++;

    }

    int* ans = (int*) malloc(num_size*sizeof(int));

    int k = 0;

    for (int i = 0; i <num_size ; i++) {

        if (nums[i] %2 !=0) {

            if (count[nums[i]] < min_val) {

                min_val = count[nums[i]];

            }

        }
    }

    for (int i = 0; i < num_size; i++) {

        if (nums[i] % 2 != 0 && count[nums[i]] == min_val) {

            ans[k++] = nums[i];

            count[nums[i]] = 0;
        }
    }



    *return_size = k;

    return ans;

}



int main() {

    int nums[] = {1, 1, 2, 3, 3, 3, 5, 5};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    int ans_size;

    int* result = min_frq_in_odd(nums,num_size,&ans_size);

    for (int i =0 ; i<ans_size;i++) {

        printf(" %d ", result[i]);
    }

    free(result);

    return 0;
}