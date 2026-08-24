#include <stdio.h>

void findMajorityElement(int arr[], int arr_size) {

    int count[20] = {0};

    int threshold = arr_size/2;

    for (int i= 0 ; i<arr_size;i++) {

        count[arr[i]]++;

    }

    for (int i=0 ; i<arr_size;i++) {

        if (count[arr[i]] > threshold) {

           printf("Majority element is : %d" , arr[i]);

            count[arr[i]] = 0;

            return;

        }


    }

    printf("not found");



}


int main() {

    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    findMajorityElement(arr,arr_size);

    return 0;
}