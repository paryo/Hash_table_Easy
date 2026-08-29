#include <stdio.h>

int sum_Of_Unique_Elements (int arr[] , int arr_size) {


    int count[10] = {0};

    int sum = 0;

    for (int i=0 ; i<arr_size;i++) {

        count[arr[i]]++;

    }

    for (int i=0 ; i<arr_size ;i++) {

        if (count[arr[i]]== 1) {

            sum+= arr[i];
        }
    }

    return sum;


}

int main() {

    int arr[] = {1, 2, 3, 2, 4, 3, 5, 3};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",sum_Of_Unique_Elements(arr,arr_size));

    return 0;
}