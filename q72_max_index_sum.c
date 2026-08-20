#include <limits.h>
#include <stdio.h>

int find_max_index_sum(int arr[] , int arr_size ) {

    int mark[10] = {0};

    int max_sum = INT_MIN;

    for (int i =0 ; i<arr_size;i++) {

        mark[arr[i]] = -1;

    }

    for (int i=0 ; i<arr_size;i++) {

        if (mark[arr[i]] == -1) {

            mark[arr[i]] = i;

        }

        else {

            int curr_sum = mark[arr[i]] + i;

            if (curr_sum > max_sum) {

                max_sum = curr_sum;
            }

            mark[arr[i]] = i;

        }

    }

    return max_sum;


}



int main() {

    int arr[] = {1, 2, 3, 1, 2, 1};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",find_max_index_sum(arr,arr_size));

    return 0;
}