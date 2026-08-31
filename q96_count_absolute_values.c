#include <stdio.h>

int count_Absolute_Values(int arr[] , int arr_size) {

    int positive_number[100] = {0};

    int negative_number[100] = {0};

    int count = 0;


    for (int i=0 ; i<arr_size ;i++) {

        if (arr[i] >= 0) {

            positive_number[arr[i]] = 1;
        }

        else if (arr[i] <0) {

            negative_number[-arr[i]] = 1;
        }
    }


    for (int i=0; i<arr_size ;i++) {

        if (arr[i] >=0) {

            if (positive_number[arr[i]] == 1) {

                count++;

            }

        }

        else if (positive_number[-arr[i]] ==1) {

            count++;
        }

    }


return count;




}

int main() {

    int arr[] = {-2,2,-3,5};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",count_Absolute_Values(arr,arr_size));

    return 0;
}