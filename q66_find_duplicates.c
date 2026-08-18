#include <stdio.h>
#include <stdlib.h>

int* find_duplicate(int arr[] , int arr_size , int *return_size) {

    int mark[10] = {0};

    int *ans =  (int*) malloc(arr_size*sizeof(int));

    int k=0;

    for (int i=0 ; i<arr_size;i++) {

        if (mark[arr[i]]  == 1) {

            ans[k] = arr[i];

            k++;

            mark[arr[i]] = -1;

        }

        else if (mark[arr[i]] == 0) {

            mark[arr[i]] = 1;
        }


    }

    *return_size = k;

    return ans;



}

int main() {

    int arr[] = {2, 3, 2, 5, 3, 3, 8, 2};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int ans_size;

    int *result = find_duplicate(arr,arr_size,&ans_size);

    for (int i =0 ; i<ans_size ;i++) {

        printf(" %d " , result[i]);

    }

    free(result);

    return 0;
}