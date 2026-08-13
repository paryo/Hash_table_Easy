#include <stdio.h>

int count_pairs(int arr[] , int arr_size , int target) {

    int mark[150] = {0};

    int offset = 100;

    int pair_count = 0;


    for (int i = 0 ; i<arr_size;i++) {

        mark[arr[i] + offset] = 1;
    }

    for (int i = 0 ; i<arr_size;i++) {

        int compliment = target - arr[i];

        if (mark[compliment + offset] == 1) {

            pair_count++;

            mark[arr[i] + offset] = 0;

            mark[compliment + offset] = 0;

        }

    }

    return pair_count;



}

int main() {

    int arr[] = {1,5,7,-1};

    int target = 6;

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",count_pairs(arr,arr_size,target));

    return 0;
}