#include <stdio.h>
#include <stdlib.h>


int* find_all_the_missing(int nums[], int num_size, int n , int* return_val) {

    int count[10] = {0};

    for (int i = 0 ; i<num_size;i++) {

        count[nums[i]]++;
    }

    // dynamic memory

    int * ans = (int*)malloc(num_size*sizeof(int));

    int k = 0;


    for (int i = 1 ; i<=n ; i++) {

        if (count[i] == 0) {

            ans[k] = i;

            k++;


        }


    }

    *return_val = k;
    return ans;

}

int main() {

    int nums[] = {1,2,4};

    int n = 5;

    int num_size = sizeof(nums)/sizeof(nums[0]);

    int ans_size;

    int* result = find_all_the_missing(nums,num_size,n,&ans_size);

    for (int i = 0 ; i<ans_size ; i++) {

        printf(" %d ", result[i]);


    }

    free(result);

    return 0;
}