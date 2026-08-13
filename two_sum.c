#include <stdio.h>
#include <stdlib.h>

int* two_sum(int arr[] , int target , int arr_size ,int* return_size) {

    int mark[150]= {0};

    int offset = 100;


    for (int i = 0 ; i<arr_size;i++) {

        mark[arr[i] + offset] = 1;
    }

    int *ans = (int*)malloc(arr_size*sizeof(int));

    int k =0;



    for (int i = 0 ; i<arr_size;i++) {

        int compliment = target - arr[i];

        if (mark[compliment + offset] == 1) {

            ans[k] = arr[i];

            k++;

            ans[k] = compliment;

            mark[arr[i] + offset] = 0;

            mark[compliment + offset] = 0;


            k++;


        }
    }

    *return_size = k;

    return ans;


}



int main() {

    int arr[] = {1,5,7,-1};

    int target = 6;

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int ans_size;

    int* result = two_sum(arr,target,arr_size,&ans_size);

    for (int i = 0 ; i<ans_size;i++) {

        printf(" %d ",result[i]);
    }

    free(result);

    return 0;
}