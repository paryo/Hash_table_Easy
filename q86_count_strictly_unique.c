#include <stdio.h>

void count_Strictly_Unique(int arr[] , int arr_size) {

    int count[10] = {0};

    for (int i=0 ; i<arr_size;i++) {

        count[arr[i]]++;
    }

    for (int i=0 ;i<arr_size;i++) {

        if (count[arr[i]] ==1) {

            printf("the frequency == 1 for elements are %d\n" , arr[i]);
        }

    }


}

int main() {

    int arr[] = {4, 5, 1, 2, 4, 5, 8, 9};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    count_Strictly_Unique(arr,arr_size);

    return 0;
}