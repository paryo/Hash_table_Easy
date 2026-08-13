#include <stdio.h>

#include <stdlib.h>

int* find_the_frequency(int nums[] , int num_size , int *return_size) {

    int count[10] = {0};

    for (int i = 0 ; i<num_size ;i++) {

        count[nums[i]]++;

    }

    // allocating dynamic memory

    int* ans = (int*) malloc(num_size*sizeof(int));

    int k = 0;


    for (int i = 0 ;i <num_size ; i++) {

        ans[k] = count[nums[i]];

        k++;
    }


    *return_size = k;

    return ans;




}




int main ()
{

    int nums[] = {1,2,2,3,3,3};

    int nums_size = sizeof(nums)/sizeof(nums[0]);

    int ans_size;

    int *result = find_the_frequency(nums,nums_size,&ans_size);

    for (int i = 0 ; i<ans_size ; i++) {

        printf(" %d ", result[i]);

    }

    free(result);


    return 0;
}