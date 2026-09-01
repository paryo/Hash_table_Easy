#include <stdio.h>

int count_Unique_Evens(int arr[] , int arr_size) {

    int mark[100] = {0};

    int unique_count = 0;


    for (int i = 0 ; i<arr_size ;i++) {

        if (arr[i] %2 == 0) {

            if (mark[arr[i]] == 0) {

                mark[arr[i]] =1;

                unique_count++;
            }

        }
    }

    return unique_count;

}

int main() {

    int arr[] = {2,4,6,2,4};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d" , count_Unique_Evens(arr,arr_size));


    return 0;
}