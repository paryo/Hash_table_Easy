#include <stdio.h>

#include <stdlib.h>

int* find_duplicate(int nums[] , int num_size , int * return_size) {

    int count[10] = {0};

    for (int i = 0 ; i<num_size ; i++) {

        count[nums[i]]++;

    }


    // allocating dynamic memory;

    int* ans = (int*) malloc(num_size*sizeof(int));

    int k =0;

    for (int i = 0 ; i< num_size ;i++) {

        if (count[nums[i]] >1) {

            ans[k] = nums[i];

            count[nums[i]] = 0;

            k++;


        }


    }


    *return_size = k;

    return ans;


}

int main() {

    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    int ans_size;

    int* result = find_duplicate(nums,num_size,&ans_size);

    for (int i = 0; i<ans_size;i++) {

        printf(" %d ", result[i]);


    }

    free(result);

    return 0;
}