#include <stdio.h>

int majority_element_n(int arr[] , int arr_size ) {

    int count[10] = {0};

    int threshold = arr_size/3;


    for (int i = 0 ; i< arr_size ;i++) {

        count[arr[i]]++;

    }

    for (int i =0 ; i<arr_size;i++) {

        if (count[arr[i]] > threshold) {

            return arr[i];

        }

    }


    return -1;



}



int main() {

    int arr[] = {3, 2, 3, 2, 1, 3};

    int arr_size = sizeof(arr)/sizeof(arr[0]);



    printf("%d",majority_element_n(arr,arr_size));


    return 0;
}