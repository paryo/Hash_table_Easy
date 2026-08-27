#include <stdio.h>

bool check_If_Exist(int arr[] , int arr_size) {

    int mark[50] = {0};


    for (int i=0 ; i<arr_size; i++) {


        mark[arr[i]] = 1;
    }


    for (int i = 0 ; i<arr_size;i++) {

        if (mark[arr[i] * 2] == 1) {

            return true;

        }
    }



return false;


}

int main() {

    int arr[] = {10, 2, 5, 3};

    int arr_size = sizeof(arr)/sizeof(arr[0]);

   printf( "%d",check_If_Exist(arr,arr_size));

    return 0;
}