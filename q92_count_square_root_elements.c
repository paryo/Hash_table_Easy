#include <stdio.h>

int count_Square_Root_Elements(int arr[] , int arr_size) {

    int mark[10] = {0};

    int count = 0;

    for (int i=0 ; i<arr_size;i++) {

        mark[arr[i]] = 1;
    }

    for (int i=0 ; i<arr_size;i++) {

        int square_root = arr[i] * arr[i];

        if (mark[square_root] == 1) {

            count++;
        }


    }

    return count;

}

int main() {

    int arr[] = {2, 4, 3, 9, 5};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",count_Square_Root_Elements(arr,arr_size));

    return 0;
}