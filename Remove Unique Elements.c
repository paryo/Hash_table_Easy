#include <stdio.h>

#include <stdlib.h>

int* remove_unique(int nums[] , int num_size , int* return_size) {

    int count[10] = {0};

    for (int i = 0 ; i< num_size ;i++) {

        count[nums[i]]++;
    }

    int *ans = (int*)malloc(num_size*sizeof(int));

    int k = 0;

    for (int i = 0 ; i<num_size ;i++) {

        if (count[nums[i]] > 1) {

            ans[k] = nums[i];

            k++;

        }


    }

    *return_size = k;

    return ans;

}

int main() {

    int nums[] = {1,2,3,2,4,1,5};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    int ans_size;

    int* result = remove_unique(nums,num_size,&ans_size);

    for (int i=0 ; i<ans_size;i++) {

        printf(" %d ", result[i]);
    }

    free(result);

    return 0;
}