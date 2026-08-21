#include <stdio.h>

int count_distinct(int arr[] , int arr_size) {

    int mark[10] = {0};

    int count = 0;


    for (int i=0 ; i< arr_size;i++) {

        if (mark[arr[i]] == 0) {

            mark[arr[i]] = 1;

            count++;

        }

        else {


            mark[arr[i]] = -1;
        }


    }

    return count;



}


int main() {

    int arr[] = {2, 5, 2, 8, 5, 5, 5, 1};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",count_distinct(arr,arr_size));

    return 0;


}