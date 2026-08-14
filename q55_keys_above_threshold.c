#include <stdio.h>
#include <stdlib.h>

int* keys_above_threshold(int nums[] , int num_size , int values[] , int threshold , int* return_value) {

    int keys[50] = {0};


    for (int i = 0 ; i<num_size ;i++) {

        keys[nums[i]] = values[i];
    }

    int *ans = (int*) malloc(num_size*sizeof(int));

    int k =0;

    for (int i = 0 ;i<num_size;i++) {

        if (keys[nums[i]] > threshold) {

            ans[k] = nums[i];

            k++;
        }


    }

    *return_value = k;

   return ans;

}


int main() {

    int nums[] = {10,20,30,40};

    int values[] = {15,50,5,90};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    int threshold = 20;

    int ans_size;

    int* result = keys_above_threshold(nums,num_size,values,threshold,&ans_size);

    for (int i=0 ;i<ans_size ; i++) {

        printf(" %d ",result[i]);

    }

    return 0;

}