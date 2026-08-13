#include <stdio.h>
#include <stdlib.h>

int* last_occurrence(int nums[] , int num_size , int * return_size) {

    int last_idx[10] = {-1};


    for (int i = 0 ; i<10 ; i++) {

        last_idx[i] = -1;
    }

    for (int i = 0 ; i<num_size ;i++) {

        last_idx[nums[i]] = i;
    }

    int* ans = (int*)malloc(num_size*sizeof(int));

    int k=0;

    for (int i = 0; i<num_size;i++) {

        if (last_idx[nums[i]] == i) {

            ans[k] = i;

            k++;

            ans[k] = nums[i];

            k++;

        }


    }

    *return_size = k;

    return ans;

}

int main() {

    int nums[] = {4,7,4,2,7};

    int nums_size = sizeof(nums)/sizeof(nums[0]);

    int ans_size;

    int* result = last_occurrence(nums,nums_size,&ans_size);

    for (int i=0 ; i<ans_size;i+=2) {

        printf("index is: %d value is : %d " , result[i] , result[i+1]);

    }

    free(result);

    return 0;
}