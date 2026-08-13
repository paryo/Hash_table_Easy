#include <stdio.h>

int half_count(int arr[] , int arr_size) {

    int total_count = 0;

    int mark[10] = {0};

    for (int i = 0 ; i<arr_size; i++) {

        mark[arr[i]] = 1;

    }

    for (int i = 0 ; i<arr_size ; i++) {

        if (arr[i] %2 == 0 && mark[arr[i] / 2] == 1) {

            total_count++;

        }

    }

    return total_count;

}

int main() {

    int arr[] = {3, 4, 2, 6, 1};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",half_count(arr,arr_size));

    return 0;
}