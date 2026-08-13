#include <stdio.h>

int smallest_missing(int arr[], int arr_size) {

    int mark[10] = {0};

    int mark_size = arr_size +2;

    for (int i=0 ; i<arr_size;i++) {

        if (arr[i] >0) {

            mark[arr[i]] = 1;

        }
    }

    for (int i = 1 ; i<mark_size;i++) {

        if (mark[i] == 0) {

            return i;
        }
    }

    return -1;

}

int main() {

    int arr[] = {3,4,-1,1};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",smallest_missing(arr,arr_size));

    return 0;
}