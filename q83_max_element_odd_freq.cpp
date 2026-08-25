#include <limits.h>
#include <stdint.h>
#include <stdio.h>


void get_Max_Odd_FreqElement(int arr[] , int arr_size) {

    int count[20] = {0};

    int max_odd = INT_MIN;

    int found =0;

    for (int i=0 ; i<arr_size ; i++) {

        count[arr[i]]++;

    }

    for (int i=0 ; i<arr_size;i++) {

        if (count[arr[i]] %2 != 0) {

            if (arr[i] > max_odd) {

                max_odd = arr[i];

                found = 1;

            }

        }
    }

    if (found) {

        printf("Odd value is found and the value is : %d", max_odd);
    }

    else {

        printf("Odd value is not found \n");
    }



}


int main () {

    int arr[] = {1, 2, 3, 2, 3, 1, 2, 2, 5, 5,5};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

   get_Max_Odd_FreqElement(arr,arr_size);

    return 0;


}