#include <stdio.h>

int unique_grater_then_threshold(int arr[] , int arr_size , int threshold) {

    int mark[20] = {0};

    int count = 0;

    for (int i= 0 ; i<arr_size;i++) {

        if (mark[arr[i]] == 0) {

            mark[arr[i]] = 1;

            if (arr[i] > threshold ) {

                count++;
            }

            else {

                mark[arr[i]] = -1;
            }

        }
    }

    return count;



}

int main() {

    int arr[] = {4, 12, 5, 12, 18, 5, 2};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int threshold = 4;

    printf("%d", unique_grater_then_threshold(arr,arr_size,threshold));

    return 0;
}