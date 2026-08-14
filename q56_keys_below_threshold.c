#include <stdio.h>
#include <stdlib.h>

int* keys_below_threshold(int nums[] , int values[] , int num_size ,int* return_values , int threshold) {

    int keys[50] = {0};

    for (int i = 0 ;i<num_size;i++) {

        keys[nums[i]] = values[i];

    }

    int *ans  = (int*) malloc(num_size*sizeof(int));

    int k=0;

    for (int i = 0 ;i<num_size;i++) {

        if (keys[nums[i]] < threshold) {

            ans[k] = nums[i];

            k++;


        }


    }

    *return_values = k;

    return ans;



}

int main() {

    int nums[] = {10,20,30,40};

    int values[]  = {15,50,5,90};

    int nums_size = sizeof(nums)/sizeof(nums[0]);

    int threshold = 20;

    int ans_val;

    int * result = keys_below_threshold(nums,values,nums_size,&ans_val,threshold);

    for (int i=0 ; i< ans_val;i++) {

        printf( " %d ",result[i]);
    }

    free(result);

    return 0;
}