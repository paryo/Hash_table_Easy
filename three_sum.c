#include <stdio.h>

#include <stdbool.h>

int three_sum(int arr[] , int arr_size, int target) {

    int mark[50] = {0};

    for (int i = 0 ; i<arr_size;i++) {

        mark[arr[i]] = 1;
    }

    for (int i = 0 ; i<arr_size;i++) {

        for (int j = i+1 ; j<arr_size ;j++) {

            int needed = target - (arr[i] + arr[j]);

            if (mark[needed] == 1 && needed != arr[i] && needed != arr[j]) {

                return true;
            }


        }
    }

    return false;


}

int main() {

    int arr[] = {10,20,30,40};

    int target = 60;

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d", three_sum(arr,arr_size,target));

    return 0;
}