#include <stdio.h>

#include <stdbool.h>

bool array_partition(int arr[] , int arr_size) {

    int count[10] = {0};

    for (int i=0 ; i<arr_size;i++) {

        count[arr[i]]++;
    }


    for (int i=0 ; i<arr_size ; i++) {

        if (count[arr[i]] %2!= 0) {

            return false;
        }

    }


    return true;
}


int main() {

    int arr[] = {1,2,2,1};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",array_partition(arr,arr_size));
}