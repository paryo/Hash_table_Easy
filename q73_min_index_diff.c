#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int min_idx_difference(int arr[] , int arr_size) {

    int mark[10];

    int min_val = INT_MAX;

    for (int i=0 ; i<arr_size;i++) {

        mark[arr[i]] = -1;

    }


    for (int i=0 ; i<arr_size ;i++) {


        if (mark[arr[i]] == -1) {

            mark[arr[i]] = i;
        }

        else {

            int curr_sum = abs(mark[arr[i]] - i);

            if (curr_sum < min_val) {

                min_val = curr_sum;
            }

            mark[arr[i]] = i;

        }


    }

    return min_val;



}

int main() {

    int arr[] = {1, 2, 3, 1, 4, 2, 1};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d" , min_idx_difference(arr,arr_size));

    return 0;

}
