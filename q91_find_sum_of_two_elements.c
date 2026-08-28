#include <stdio.h>

void find_Sum_Elements(int arr[], int arr_size) {

    int mark[10] = {0};

    for (int i=0 ; i<arr_size ;i++) {

        mark[arr[i]] = 1;
    }

    for (int i =0 ; i<arr_size;i++) {

        for (int j = i+1 ; j<arr_size;j++) {

            int sum = arr[i] + arr[j];

            if (mark[sum] == 1) {

                printf("Number found: %d (Sum of %d + %d)\n", sum, arr[i], arr[j]);

                mark[sum] = 0;
            }

        }

    }
}

int main() {

    int arr[] = {1, 2, 3, 5, 8};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    find_Sum_Elements(arr,arr_size);

    return 0;
}