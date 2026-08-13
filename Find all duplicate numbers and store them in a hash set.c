#include <stdio.h>
#include <stdlib.h>

int* duplicate_numbers(int nums[] , int num_size , int* return_size) {

    int count[10] = {0};

    //dynamic memory allocation

    int *ans = (int*)malloc(num_size*sizeof(int));

    int k =0;

    for (int i= 0 ; i<num_size;i++) {

        if (count[nums[i]] !=0) {

            ans[k] = nums[i];

            k++;


        }

        else {

            count[nums[i]] = 1;
        }


    }

    *return_size = k;

    return ans;


}

int main() {

    int nums[] = {1, 2, 3, 2, 4, 1};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    int ans_size;

    int* result = duplicate_numbers(nums,num_size,&ans_size);

    for (int i=0 ; i<ans_size;i++) {

        printf("%d", result[i]);

    }

    free(result);

    return 0;
}