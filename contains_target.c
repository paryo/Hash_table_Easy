#include <stdio.h>

#include <stdbool.h>


bool contains_target(int arr[] , int arr_size , int target) {

    int mark[50] = {0};


    for (int i = 0 ; i<arr_size ;i++) {

        mark[arr[i]] = 1;

    }

    if (target <50 && mark[target] == 1) {

        return true;
    }


    return false;

}

int main() {

    int arr[] = {10,20,30,40};

    int target = 10;

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",contains_target(arr,arr_size,target));

    return 0;
}