#include <stdio.h>

void array_rank(int arr[] , int arr_size) {

    int mark[50] = {0};

    int rank_mark[50] = {0};

    for (int i = 0 ; i<arr_size;i++) {

        mark[arr[i]] = 1;
    }

    int curr_rank = 1;

    for (int i = 0 ; i<50 ; i++) {

        if (mark[i] == 1) {

            rank_mark[i] = curr_rank;

            curr_rank++;

        }

    }

    for (int i = 0; i<arr_size;i++) {

        arr[i] = rank_mark[arr[i]];


    }



}

int main() {

    int arr[] = {40, 10, 20, 10};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    array_rank(arr,arr_size);

    for (int i=0 ; i<arr_size;i++) {

        printf(" %d ",arr[i]);

    }

    printf("\n");

    return 0;


}