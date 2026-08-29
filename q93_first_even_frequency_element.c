#include <stdio.h>

int find_First_Even_Frequency(int arr[] , int arr_size) {

    int count[10] = {0};

    for (int i=0 ; i<arr_size ;i++) {

        count[arr[i]]++;

    }

    for (int i=0 ; i<arr_size ;i++) {

        if (count[arr[i]] %2 == 0) {

            return arr[i];

        }

    }


    return -1;
}




int main() {

    int arr[] = {3, 5, 2, 5, 3, 3};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",find_First_Even_Frequency(arr,arr_size));

    return 0;
}