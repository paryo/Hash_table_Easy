#include <stdio.h>

#include <stdbool.h>

bool positive_and_negative(int arr[] , int arr_size) {

    int mark[21] = {0};

    int offset = 10;

    for (int i = 0 ; i<arr_size;i++) {

        if (mark[-arr[i]+offset] == 1) {

            return true;

        }
        else {

            mark[arr[i] + offset] = 1;


        }

    }

    return false;



}

int main() {

    int arr[] = {10,2,-5,8,5};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",positive_and_negative(arr,arr_size));

    return 0;
}