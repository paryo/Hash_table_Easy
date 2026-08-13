#include <stdio.h>

int count_pair_k(int arr[] , int k , int arr_size) {

    int mark[10] = {0};

    int pair_count = 0;

    for (int i = 0 ; i<arr_size;i++) {

        mark[arr[i]] = 1;
    }

    for (int i = 0; i<arr_size;i++) {

        int k_difference = k + arr[i];

        if (mark[k_difference] == 1 && mark[arr[i]] == 1) {

            pair_count++;

            mark[arr[i]] = 0;

            mark[k_difference] = 0;
        }
    }

    return pair_count;



}

int main() {

    int arr[] = {1,5,3};

    int k = 2;

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d" , count_pair_k(arr,k,arr_size));

    return 0;
}