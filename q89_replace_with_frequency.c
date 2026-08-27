#include <stdio.h>

void replace_With_Frequency(int arr[], int arr_size) {

    int count[10] = {0};

    for (int i = 0 ; i<arr_size ; i++) {

        count[arr[i]]++;
    }


    for (int i= 0 ; i<arr_size ; i++) {

        arr[i] = count[arr[i]];

        printf("The replace values are %d\n", arr[i]);

    }

}

int main() {

    int arr[] = {4, 5, 4, 2, 5, 5};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    replace_With_Frequency(arr,arr_size);


    return 0;

}