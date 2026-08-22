#include <stdio.h>
#include <stdlib.h>

int* appearing_once(int arr[] , int arr_size , int* return_size) {

    int count[10] = {0};

    for (int i=0 ; i<arr_size ; i++) {

        count[arr[i]]++;
    }

    int* ans = (int*)malloc(arr_size*sizeof(int));

    int k = 0;


    for (int i=0 ; i<arr_size ; i++) {

        if (count[arr[i]] == 1) {

            ans[k] = arr[i];

            k++;


        }

    }

    *return_size = k;

    return ans;

}

int main() {

    int arr[] = {4, 5, 2, 5, 1, 4, 9};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int ans_size;

    int* result = appearing_once(arr,arr_size,&ans_size);

    for (int i=0 ; i<ans_size;i++) {


        printf(" Elements appearing once are : %d \n", result[i]);


    }

    free(result);

    return 0;
}