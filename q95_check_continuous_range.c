#include <limits.h>
#include <stdio.h>

#include <stdbool.h>


bool can_Form_Continuous_Range(int arr[] , int arr_size) {

    int mark[10] = {0};

    int min = INT_MAX;

    int max = INT_MIN;

    for (int i = 0 ; i<arr_size ;i++) {

        if (arr[i] < min) {

            min = arr[i];
        }

        if (arr[i] > max) {

            max = arr[i];
        }

        if (mark[arr[i]] == 1) {

            return false;
        }

        else {

            mark[arr[i]] = 1;
        }


    }

    if ((max - min +1) == arr_size) {

        return true;

    }

    return false;


}

int main() {

    int arr[] = {5, 2, 3, 1, 4};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",can_Form_Continuous_Range(arr,arr_size));

    return 0;
}