#include <limits.h>
#include <stdio.h>

void get_Min_Even_FreqElement(int arr[] , int arr_size) {

    int count[20] = {0};

    int min_value = INT_MAX;

    int found =0;

    for (int i=0 ; i<arr_size;i++) {

        count[arr[i]]++;
    }

    for (int i = 0 ; i<arr_size;i++) {

        if (count[arr[i]] %2 == 0) {


            if (arr[i] < min_value) {


                min_value = arr[i];

                found =1;


            }
        }

    }

    if (found) {

        printf("The even min value is found and it's :  %d\n", min_value) ;
    }

    else {

        printf("The even min value is not found\n");
    }


}


int main() {

    int arr[] = {1, 2, 3, 2, 3, 1, 3, 2, 2, 5, 5, 5};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    get_Min_Even_FreqElement(arr,arr_size);

    return 0;


}