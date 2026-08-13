#include <stdio.h>
#include <stdlib.h>

int* first_occ_idx(int arr[] , int num_size , int* return_size) {

    int mark[10];

    for (int i = 0 ; i<10 ; i++) {

        mark[i] = -1;
    }

    int* ans = (int*)malloc(num_size*sizeof(int));

    int k =0;

    for (int i = 0; i< num_size ;i++) {

        if (mark[arr[i]] == -1) {

            mark[arr[i]] = i;

            ans[k] = i;

            k++;

            ans[k] = arr[i];

            k++;


        }
    }

    *return_size = k;

    return ans;


}

int main() {

    int nums[] = {4,7,4,2};

    int num_size = sizeof(nums)/sizeof(nums[0]);

    int ans_val;

    int *result = first_occ_idx(nums,num_size,&ans_val);

    for (int i =0 ; i<ans_val;i+=2) {

        printf(" index : %d => value : %d\n",result[i] , result[i+1]);
    }

    free(result);

    return 0;
}